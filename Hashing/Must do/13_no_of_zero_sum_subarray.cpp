// https://practice.geeksforgeeks.org/problems/zero-sum-subarrays/0

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
    ll ans=0,sum=0;
    unordered_map<ll,ll> mp;
    mp[0]++;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        if(mp.find(sum) != mp.end()){
            ans+=mp[sum];
        }
        mp[sum]++;
    }
    
    
    cout << ans << endl;
    }
    return 0;
}