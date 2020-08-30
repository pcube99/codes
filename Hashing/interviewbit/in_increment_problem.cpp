// https://www.interviewbit.com/problems/an-increment-problem/

vector<int> Solution::solve(vector<int> &a) {
    vector<int> ans;
    unordered_map<int, int> mp;
    for(int i=0;i<a.size();i++) {
        if(mp.find(a[i]) != mp.end()) {
            int in = mp[a[i]];
            a[in]++;
            mp[a[in]] = in;
        }
        mp[a[i]] = i;
    }
    
    
    return a;
}
