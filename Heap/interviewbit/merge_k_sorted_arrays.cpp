//  https://www.interviewbit.com/problems/merge-k-sorted-arrays/

vector<int> Solution::solve(vector<vector<int> > &a) {
    vector<int> ans;
    multiset<int> st;
    for(int i=0;i<a.size();i++) {
        for(int j=0;j<a[0].size();j++) {
            st.insert(a[i][j]);
        }
    }
    for(auto it: st) {
        ans.push_back(it);
    }
    return ans;
}
