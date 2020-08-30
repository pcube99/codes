// https://www.interviewbit.com/problems/subarray-with-equal-occurences/

int Solution::solve(vector<int> &a, int b, int c) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    int ans = 0, sum = 0;
    for(int i=0;i<a.size();i++) {
        if(a[i] == b) {
            sum++;
        } else if(a[i] == c) {
            sum--;
        }
        ans += mp[sum];
        mp[sum]++;
    }
    return ans;
}
