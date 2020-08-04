//https://www.geeksforgeeks.org/program-page-replacement-algorithms-set-1-lru/

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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll k;
    cin >> k;
    list<ll> ls;
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(find(ls.begin(),ls.end(),a[i]) != ls.end()){
            ls.remove(a[i]);
            ls.push_back(a[i]);
        }
        else if(ls.size() < k){
            ans++;
            ls.push_back(a[i]);
        }
        
        else{
            ans++;
            ls.pop_front();
            ls.push_back(a[i]);
        }
    }
    cout << ans << endl;
    }
    return 0;
}