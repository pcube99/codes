// https://www.interviewbit.com/problems/combination-sum/

void backtrack(set<vector<int> > &st, vector<int> temp, int sum, vector<int> a, int index) {
    if(sum == 0) {
        st.insert(temp);
        return;
    }
    for(int i=index; i<a.size();i++) {
        if(a[i] > sum) {
            return;
        }
        if(a[i] <= sum) {
            temp.push_back(a[i]);
            backtrack(st,temp,sum-a[i],a,i);
            temp.pop_back();
        }
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &a, int sum) {
    vector<vector<int> > ans;
    set<vector<int> > st;
    sort(a.begin(), a.end());
    vector<int> temp;
    backtrack(st, temp, sum, a, 0);
    for(auto i: st) {
        ans.push_back(i);
    }
    return ans;
}
