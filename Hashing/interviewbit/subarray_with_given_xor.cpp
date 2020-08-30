// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &a, int b) {
    int ans = 0, xorr = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(int i=0;i<a.size();i++) {
        xorr ^= a[i];
        if(mp.find(xorr^b) != mp.end()) {
            ans += mp[xorr^b];
        }
        
        mp[xorr]++;
    }
    
    
    
    return ans;
}
