// https://www.interviewbit.com/problems/subsets-ii/

void backtrack(set<vector<int> > &st, vector<int> temp, vector<int> a, int index) {
    st.insert(temp);
    for(int i=index;i<a.size();i++) {
        temp.push_back(a[i]);
        backtrack(st,temp,a,i+1);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &a) {
    vector<vector<int> > ans;
    set<vector<int> > st;
    sort(a.begin(), a.end());
    vector<int> temp;
    backtrack(st, temp, a, 0);
    for(auto i: st) {
        ans.push_back(i);
    }
    return ans;
}
