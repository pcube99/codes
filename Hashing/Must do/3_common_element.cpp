// https://practice.geeksforgeeks.org/problems/common-elements/0

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
    ll n,m,l;
    cin >> n >> m >> l;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll a;
        cin >> a;
        mp[a]=1;
    }
    for(ll i=0;i<m;i++){
        ll b;
        cin >> b;
        if(mp[b]==1)
            mp[b]=2;
    }
    for(ll i=0;i<l;i++){
        ll c;
        cin >> c;
        if(mp[c]==2)
            mp[c]=3;
    }
    bool flag=0;
    for(auto i: mp){
        if(i.second == 3){
            cout << i.first << " ";
            flag=1;
        }
    }
    if(flag == 0)
        cout << "-1";
    cout << endl;
    
    }
    return 0;
}