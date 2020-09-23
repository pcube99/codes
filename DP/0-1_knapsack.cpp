// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0
// https://www.interviewbit.com/problems/0-1-knapsack/

#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    ll n,w;
    cin >> n >> w;
    ll val[n],wt[n];
    for(ll i=0;i<n;i++){
        cin >> val[i];
    }
    for(ll i=0;i<n;i++){
        cin >> wt[i];
    }
    ll dp[n+1][w+1];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=w;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(wt[i-1] > j)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j] = max(dp[i-1][j] , val[i-1]+dp[i-1][j-wt[i-1]]);
        }
    }
    cout << dp[n][w] << endl;
    }
    return 0;
}