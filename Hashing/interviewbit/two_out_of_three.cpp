// https://www.interviewbit.com/problems/two-out-of-three/

vector<int> Solution::solve(vector<int> &a, vector<int> &b, vector<int> &c) {
    map< int, set<int> > mp;
    for(int i=0;i<a.size();i++) {
        mp[a[i]].insert(1);
    }
    for(int i=0;i<b.size();i++) {
        mp[b[i]].insert(2);
    }
    for(int i=0;i<c.size();i++) {
        mp[c[i]].insert(3);
    }
    vector<int> ans;
    for(auto it : mp) {
        if(it.second.size() >= 2 ) {
            ans.push_back(it.first);
        }
    }
    // sort(ans.begin(), ans.end());
    return ans;
}
