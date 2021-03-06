//https://practice.geeksforgeeks.org/problems/maximize-toys/0

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
    ll n,k;
    cin >> n >> k;
    ll a[n];
    priority_queue<ll,vector<ll> , greater<ll> >q;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        q.push(x);
    }
    ll c=0;
    while(q.top() < k){
        c++;
        k=k-q.top();
        q.pop();
    }
    cout << c << endl;
    }
    return 0;
}