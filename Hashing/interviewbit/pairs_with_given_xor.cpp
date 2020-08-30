// https://www.interviewbit.com/problems/pairs-with-given-xor/

int Solution::solve(vector<int> &a, int b) {
    unordered_map<int, int> mp;
    for(int i=0;i<a.size();i++) {
        mp[a[i]]++;
    }
    int count = 0;
    for(int i=0;i<a.size();i++) {
        count += mp[a[i]^b];
    }
    return count/2;
    
}
