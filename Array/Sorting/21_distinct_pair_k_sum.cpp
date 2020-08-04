//https://www.geeksforgeeks.org/count-pairs-difference-equal-k/
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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll count=0;
    ll k;
    cin >> k;
    ll flag[n]={0};
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i && a[i]-a[j] == k){
                mp.insert(make_pair(a[i],a[j]));
            }
        }
    }
    cout << mp.size() << endl;
    }
    return 0;
}