// https://practice.geeksforgeeks.org/problems/longest-common-substring/0/

using namespace std;
#define ll long long
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
    ll n,m;
    cin >> n >> m;
    string s1,s2;
    cin >> s1 >> s2;
    ll dp[n+1][m+1];
    ll maxi = INT_MIN;
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(s1[i-1] == s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                maxi=max(maxi,dp[i][j]);
            }
            else dp[i][j]=0;
        }
    }
    if(maxi == INT_MIN)
        maxi=0;
    cout << maxi << endl;
    }
    return 0;
}