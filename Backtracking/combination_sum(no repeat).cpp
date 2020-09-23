// https://www.interviewbit.com/problems/combination-sum-ii/

void backtrack(set<vector<int> > &st, vector<int> temp, vector<int> a, int sum, int index) {
    if(sum == 0) {
        st.insert(temp);
        return;
    }
    for(int i=index;i<a.size();i++) {
        if(a[i] > sum) {
            return;
        }
        if(a[i] <= sum) {
            temp.push_back(a[i]);
            backtrack(st,temp,a,sum-a[i],i+1);
            temp.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &a, int sum) {
    vector<vector<int> > ans;
    sort(a.begin(), a.end());
    set<vector<int> > st;
    vector<int> temp;
    backtrack(st,temp,a,sum,0);
    for(auto i : st) {
        ans.push_back(i);
    }
    return ans;
    
}
