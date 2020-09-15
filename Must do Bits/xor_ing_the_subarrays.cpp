// https://www.interviewbit.com/problems/xor-ing-the-subarrays/

int Solution::solve(vector<int> &a) {
    int ans=0;
    for(int i=0;i<a.size();i++) {
        int x = (i+1)*(a.size()-i);
        if(x%2 != 0)
            ans ^= a[i];
    }
    return ans;
}