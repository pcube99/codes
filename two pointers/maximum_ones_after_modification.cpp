// https://www.interviewbit.com/problems/maximum-ones-after-modification/

// same variation as above
// https://www.interviewbit.com/problems/max-continuous-series-of-1s/
int Solution::solve(vector<int> &a, int b) {
    int ans = INT_MIN, left =0,i=0, right = 0, n =a.size(), count = 0;
    while(i < n) {
        if(a[i] == 0) {
            count++;
        }
        while(count > b) {
            if(a[left] == 0) {
                count--;
            }
            left++;
        }
        ans = max(ans, i-left+1);
        i++;
    }
    return ans;
}
