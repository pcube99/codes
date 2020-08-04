//https://www.geeksforgeeks.org/find-elements-array-least-two-greater-elements/

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
    priority_queue<ll, vector<ll> ,greater<ll> > q;
    for(ll i=0;i<n;i++)
        q.push(a[i]);
    ll ans=1;
    for(ll i=0;i<n-2;i++){
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

}
return 0;
}