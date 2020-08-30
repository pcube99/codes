//https://www.geeksforgeeks.org/count-pairs-difference-equal-k/#include <bits/stdc++.h>
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
    ll n, k , count = 0;
    map<ll, ll> mp;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    cin >> k;
    if(k == 0) {
        for(auto it: mp) {
            if(it.second >=2) {
                count++;
            }
        }
    } else {
    for(ll i=0;i<n;i++) {
        if(mp.find(k + a[i]) != mp.end())
            count++;
    }
    }
    cout << count << endl;
    }
    return 0;
}