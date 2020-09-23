// https://practice.geeksforgeeks.org/problems/coin-change2448/1

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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll x;
    cin >> x;
    ll dp[n+1][x+1];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=x;j++){
            if(i==0 && j==0)
                dp[i][j]=1;
            else if(i==0)
                dp[i][j]=0;
            else if(j==0)
                dp[i][j]=1;
                else if(a[i-1] > j)
                dp[i][j]=dp[i-1][j];
            else if(a[i-1] == j)
                dp[i][j]=dp[i-1][j]+1;
            else
                dp[i][j] = dp[i-1][j]+dp[i][j-a[i-1]];
        }
    }
    
            cout << dp[n][x] << endl;

    }
    return 0;
}