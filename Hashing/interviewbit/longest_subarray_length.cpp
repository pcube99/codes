// https://www.interviewbit.com/problems/longest-subarray-length/

int Solution::solve(vector<int> &a) {
    map<int, int> mp;
    int sum = 0, maxi = INT_MIN, n = a.size();
    for(int i=0;i<n;i++) {
        sum += a[i] == 0 ? -1 : 1;
        if(sum == 1) {
            maxi = i+1;
        } else if(mp.find(sum) == mp.end()) {
            mp[sum]=i;
        }
        if(mp.find(sum-1) != mp.end()) {
            maxi = max(maxi, i-mp[sum-1]);
        }
    }
    return maxi;
}
