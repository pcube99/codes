// https://practice.geeksforgeeks.org/problems/cutted-segments/0

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
    ll a[3];
    for(ll i=0;i<3;i++){
        cin >> a[i];
    }
    ll dp[n+1];
    sort(a,a+3);
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<3;i++){
        if(a[i] <=n)
            dp[a[i]]=1;
    }
    for(ll i=a[0]+1;i<=n;i++){
        for(ll j=0;j<3;j++){
        if(i-a[j] >=0&&dp[i-a[j]]!=0){
        dp[i]=max(dp[i], 1+dp[i-a[j]]);
        }
        }
    }
    cout << dp[n] << endl;
    }
    return 0;
}