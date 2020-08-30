// https://practice.geeksforgeeks.org/problems/toggle-bits-given-range/0
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
    ll n,l,r,ans;
    cin >> n >> l >> r;
    for(ll i=l-1;i<r;i++){
        ans=1<<i;
        n=n^ans;
    }
    cout << n << endl;
    }
    return 0;
}