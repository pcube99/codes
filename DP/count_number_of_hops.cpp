// https://practice.geeksforgeeks.org/problems/count-number-of-hops/0
// https://www.interviewbit.com/problems/stairs/

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
    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(ll i=4;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout << dp[n] << endl;
    }
    return 0;
}