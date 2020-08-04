//https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cout << #a << ": " << (a) << endl;
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
    ll a[n],b[k];
    unordered_map<ll,ll> s;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        s[a[i]]++;
    }
    for(ll i=0;i<k;i++){
        cin >> b[i];
        s[b[i]]++;
    }
    cout << s.size() << endl;
    }
    return 0;
}