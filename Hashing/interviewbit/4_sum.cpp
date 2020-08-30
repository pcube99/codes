// https://www.interviewbit.com/problems/4-sum/

vector<vector<int> > Solution::fourSum(vector<int> &a, int b) {
    int n = a.size();
    map<int, vector<pair<int, int> > > mp;
    set<vector<int> > st;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            mp[a[i]+a[j]].push_back({i,j});
        }
    }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(mp.find( b-(a[i]+a[j])) != mp.end()) {
                auto it = mp[b-(a[i]+a[j])];
                int n = mp[b-(a[i]+a[j])].size();
                for(int k=0;k<n;k++) {
                    if(it[k].first != i && it[k].second != i &&
                        it[k].first != j && it[k].second != j) {
                            vector<int> temp;
                            temp.push_back(a[i]);
                            temp.push_back(a[j]);
                            temp.push_back(a[it[k].first]);
                            temp.push_back(a[it[k].second]);
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                }
            } 
        }
    }
    vector< vector<int> > ans;
    for(auto it : st) {
        ans.push_back(it);
    }
    return ans;
}
