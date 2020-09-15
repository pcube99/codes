// https://www.interviewbit.com/problems/subset/

void backtrack(set<vector<int> > &st, vector<int> a, vector<int> temp, int index) {
    st.insert(temp);
    for(int i=index;i<a.size();i++) {
        temp.push_back(a[i]);
        backtrack(st,a,temp,i+1);
        temp.pop_back();
    }
    return;
}

vector<vector<int> > Solution::subsets(vector<int> &a) {
    sort(a.begin(), a.end());
    vector<vector<int> > ans;
    set<vector<int> > st;
    vector<int> temp;
    backtrack(st,a,temp,0);
    for(auto it: st) {
        ans.push_back(it);
    }
    return ans;
}
