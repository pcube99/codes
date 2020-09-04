// https://www.interviewbit.com/problems/n-max-pair-combinations/

vector<int> Solution::solve(vector<int> &a, vector<int> &b) {
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    set<pair<int, int> > st;
    vector<int> ans;
    priority_queue<pair<int, pair<int, int> > > pq;
    int n = a.size();
    st.insert({0,0});
    pq.push({a[0]+b[0], {0,0}});
    for(int i=0;i<n;i++) {
        auto it = pq.top();
        pq.pop();
        ans.push_back(it.first);
        if(st.find({it.second.first+1, it.second.second}) == st.end()) {
            st.insert({it.second.first+1, it.second.second});
            pq.push({a[it.second.first+1]+b[it.second.second], {it.second.first+1, it.second.second}});
        }
        if(st.find({it.second.first, it.second.second+1}) == st.end()) {
            st.insert({it.second.first, it.second.second+1});
            pq.push({a[it.second.first]+b[it.second.second+1], {it.second.first, it.second.second+1}});
        }
    }
    return ans;
}
