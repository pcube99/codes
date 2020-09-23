// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

// https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
// If we can count the number of 5s and 2s, our task is done.
int Solution::trailingZeroes(int a) {
    int ans = 0;
    for(int i=5;a/i>=1;i*=5) {
        ans += (a/i);
    }
    return ans;
}
