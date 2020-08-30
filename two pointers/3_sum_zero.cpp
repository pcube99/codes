// https://www.interviewbit.com/problems/3-sum-zero/

// similar as 3_sum
// https://www.interviewbit.com/problems/3-sum/

vector<vector<int> > Solution::threeSum(vector<int> &a) {
    long left,right,n=a.size();
    vector<vector<int> > ans;
    sort(a.begin(), a.end());
    for(int i=0;i<n-2;i++) {
        left = i+1;
        right = n-1;
        while(left < right) {
            long long su = (long long)a[i] + (long long)a[left] + (long long)a[right];
            if(su == 0) {
                vector<int> temp;
                temp.push_back(a[i]);
                temp.push_back(a[left]);
                temp.push_back(a[right]);
                left++;
                right--;
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            else if(su < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    set<vector<int> > st;
    for(int i=0;i<ans.size();i++){
        st.insert(ans[i]);
    }
    vector<vector<int> > a1;
    for(auto it=st.begin(); it!=st.end();it++) {
        a1.push_back(*it);
    }
    return a1;
}
