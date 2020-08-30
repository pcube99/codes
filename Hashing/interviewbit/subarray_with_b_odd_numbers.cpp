// https://www.interviewbit.com/problems/subarray-with-b-odd-numbers/

// similar as 
// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &a, int b) {
    for(int i=0;i<a.size();i++) {
        if(a[i]%2 == 0) {
            a[i] = 0;
        } else {
            a[i] = 1;
        }
    }
    unordered_map<int, int> mp;
    mp[0] = 1;
    int sum = 0, count = 0;
    for(int i=0;i<a.size();i++) {
        sum += a[i];
        if(mp.find(sum-b) != mp.end()) {
            count += mp[sum-b];
        }
        
        mp[sum]++;
    }
    return count;
}

