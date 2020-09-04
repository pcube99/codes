// https://www.interviewbit.com/problems/maximum-sum-combinations/

// https://www.geeksforgeeks.org/k-maximum-sum-combinations-two-arrays/

vector<int> Solution::solve(vector<int> &a, vector<int> &b, int c) {
    vector<int> ans;
    int n = a.size();
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    priority_queue<pair<int, pair<int,int> > > pq;
    set<pair<int,int> > st;
    st.insert(make_pair(0,0));
    pq.push(make_pair(a[0]+b[0], make_pair(0,0)));
    int sum;
    for(int i=0;i<c;i++) {
        auto it = pq.top();
        pq.pop();
        ans.push_back(it.first);
        int a1,a2;
        a1 = it.second.first;
        a2 = it.second.second;
        if(a1+1 < n) {
        sum = a[a1+1]+b[a2];
        if(st.find(make_pair(a1+1,a2)) == st.end()) {
            st.insert(make_pair(a1+1,a2));
            pq.push(make_pair(sum, make_pair(a1+1,a2)));
        }
        }
        if(a2+1 < n) {
        sum = a[a1]+b[a2+1];
        if(st.find(make_pair(a1,a2+1)) == st.end()) {
            st.insert(make_pair(a1,a2+1));
            pq.push(make_pair(sum, make_pair(a1,a2+1)));
        }
        }
        
    }
    return ans;
}
