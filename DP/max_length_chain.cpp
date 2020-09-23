// https://practice.geeksforgeeks.org/problems/max-length-chain/1

struct val{
	int first;
	int second;
};*/
/*You are required to complete this method*/

bool cmp(val p1, val p2){
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second < p2.second;
}
int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,cmp);
    int dp[n];
    dp[0]=1;
    for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(p[j].second < p[i].first && dp[i] < dp[j]+1)
                dp[i]=dp[j]+1;
        }
    }
    return *max_element(dp,dp+n);
}