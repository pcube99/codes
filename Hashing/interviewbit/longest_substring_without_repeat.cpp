// https://www.interviewbit.com/problems/longest-substring-without-repeat/

int Solution::lengthOfLongestSubstring(string s) {
    int maxi = INT_MIN, n = s.size(), start = 0, end = 0;
    map<char, int> mp;
    while(end < n) {
        mp[s[end]]++;
        while(mp[s[end]] > 1) {
            mp[s[start]]--;
            start++;
        }
        maxi = max(maxi, end-start+1);
        end++;
    }
    return maxi;
}
