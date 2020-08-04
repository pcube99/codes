//https://practice.geeksforgeeks.org/problems/minimum-product-of-k-integers/0


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){ 
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll k;
    cin >> k;
    priority_queue<ll, vector<ll> ,greater<ll> > q;
    for(ll i=0;i<n;i++)
        q.push(a[i]);
    ll ans=1;
    ll mod=1e9+7;
    for(ll i=0;i<k;i++){
        ans=( (ans%mod) * (q.top()%mod) )%mod;
        q.pop();
    }
    cout << ans%mod<< endl;

}
return 0;
}