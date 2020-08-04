#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin >> n;
    ll a[n],index[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=0;i<n;i++)
        cin >> index[i];
    set<pair<ll,ll> > s;
    for(ll i=0;i<n;i++){
        s.insert(make_pair(index[i], a[i]));
    }
    for(auto it : s){
        cout << it.second  << " ";
    }
    return 0;
}