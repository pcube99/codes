#include <bits/stdc++.h>
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
    ll a[n+1][m+1];
    memset(a,0,sizeof(a));
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            if(i==0)
                a[i][j]=j;
            else if(j==0)
                a[i][j]=i;
            else if(s1[i-1] == s2[j-1] ){
                a[i][j]=a[i-1][j-1];
            }
            else {
                a[i][j] = 1+ min(min(a[i-1][j], a[i-1][j-1]), a[i][j-1]);
            }
        }
    }
    cout << a[n][m] << endl;
    }
    return 0;
}