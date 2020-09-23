// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll dp[n];
    for(ll i=0;i<n;i++)
        dp[i]=a[i];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<i;j++){
            if(a[j] < a[i] && dp[i] < dp[j]+a[i])
                dp[ai]=dp[j]+a[i];
        }
    }
    cout << *max_element(dp,dp+n) << endl;
    
    }
    return 0;
}