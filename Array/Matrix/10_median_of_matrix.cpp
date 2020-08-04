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
    vector<ll> v;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
        cin >> a[i][j];
        v.push_back(a[i][j]);
        }
    }
    
    sort(v.begin() ,v.end());
    cout << v[v.size()/2] << endl;
    }
    return 0;
}