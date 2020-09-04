// https://www.interviewbit.com/problems/distinct-numbers-in-window/

vector<int> Solution::dNums(vector<int> &a, int b) {
    vector<int> ans;
    int n = a.size();
    if(b > n) {
        return ans;
    }
    map<int,int> mp;
    for(int i=0;i<b;i++) {
        mp[a[i]]++;
    }
    for(int i=b;i<n;i++) {
        ans.push_back(mp.size());
        mp[a[i-b]]--;
        if(mp[a[i-b]] == 0) {
            mp.erase(a[i-b]);
        }
        mp[a[i]]++;
    }
    ans.push_back(mp.size());
    
    return ans;
}
