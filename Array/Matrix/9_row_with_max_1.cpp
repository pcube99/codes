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
    ll a[n][m];
    ll maxi=INT_MIN;
    ll index=0;
    for(ll i=0;i<n;i++){
        ll c=0;
        for(ll j=0;j<m;j++){
        cin >> a[i][j];
        if(a[i][j]==1)
            c++;
        }
        if(maxi < c){
            maxi=c;
            index=i;
        }
    }
    cout << index << endl;
    }
    return 0;
}