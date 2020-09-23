// https://practice.geeksforgeeks.org/problems/edit-distance/0
// https://www.interviewbit.com/problems/edit-distance/
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll min(ll a, ll b, ll c){
    return min(a,min(b,c));
}
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    ll n,m;
    cin >> n >> m;
    string s1,s2;
    cin >> s1 >> s2;
    ll dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(s1[i-1] == s2[j-1]){
                dp[i][j]= dp[i-1][j-1];
            }
            else 
                dp[i][j] = min(dp[i-1][j] , dp[i][j-1], dp[i-1][j-1])+1;
        }
    }
    cout << dp[n][m] << endl;
    }
    return 0;
}