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
    ll a[n];
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll b[m];
    for(ll i=0;i<m;i++){
        cin >> b[i];
    }
    for(ll i=0;i<m;i++){
        if(mp.find(b[i]) != mp.end()){
            // deb(b[i]);
            while(mp[b[i]]--){
                cout << b[i] << " ";
            }
        }
    }
    for(auto i : mp){
        if(i.second ==-1)
            continue;
        else{
            while(i.second--)
                cout << i.first << " ";
        }
    }
    cout << endl;
    }
    return 0;
}