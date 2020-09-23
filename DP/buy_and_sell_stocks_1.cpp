// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-i/

int Solution::maxProfit(const vector<int> &A)
{
if(A.size()==0) return 0;
int mn=A[0];int mx=0;
for(int i=1;i<A.size();i++)
{
mn=min(A[i],mn);
mx=max(mx,A[i]-mn);
}
return mx;
}