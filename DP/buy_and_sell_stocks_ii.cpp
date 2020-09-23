// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-ii/

// on one day buy and sell allowed
int Solution::maxProfit(const vector<int> &A) {
int n=A.size();
if(n==0)
return 0;
int dp[n];
dp[0]=0;
for(int i=1;i<n;i++)
{
if(A[i]>A[i-1])
{
dp[i]=dp[i-1]+(A[i]-A[i-1]);
}
else
dp[i]=dp[i-1];
}
return dp[n-1];
}