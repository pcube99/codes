// https://www.interviewbit.com/problems/step-by-step/

int Solution::solve(int a) {
    a = abs(a);
    int ans=0,sum=0;
    while(sum < a || (sum-a) %2 != 0) {
        ans++;
        sum += ans;
    }
    return ans;
}
