// https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x/0

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
    ll n,m,k;
    cin >> n >> m >> k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll b[m];
    map<ll,ll> mp;
    for(ll i=0;i<m;i++){
        cin >> b[i];
        mp[b[i]]++;
    }
    vector<pair<ll,ll> > v;
    for(ll i=0;i<n;i++){
        if(mp.find(k-a[i]) != mp.end()){
            v.push_back({a[i],k-a[i]});
        }
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second ;
        if(i+1!=v.size())
            cout << ", ";
    }
    if(v.size()==0)
        cout << "-1";
    cout << endl;
    }
    return 0;
}