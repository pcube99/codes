// https://www.interviewbit.com/problems/equal/

vector<int> Solution::equal(vector<int> &a) {
    vector<int > ans;
    map<int,vector<pair<int, int>> > mp;
    int n = a.size(),aa,bb,cc,dd;
    
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            mp[a[i]+a[j]].push_back(make_pair(i,j));
        }
    }
    for(auto i : mp) {
        if(i.second.size() >= 2) {
            aa = i.second[0].first;
            bb = i.second[0].second;
            for(auto j : i.second) {
                cc = j.first;
                dd = j.second;
                vector<int> temp = {aa, bb, cc ,dd };
                if(aa < dd && bb != cc && bb != dd && aa != cc &&
                aa != dd && (ans.size() == 0 || ans > temp)) {
                    ans = temp; 
                }
            }
        }
    } 
    return ans;
}
