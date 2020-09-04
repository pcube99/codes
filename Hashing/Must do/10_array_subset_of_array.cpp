// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0

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
    ll n,m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    unordered_map<ll,ll> mp,mp1;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp1[a[i]]++;
    }
    for(ll i=0;i<m;i++){
        cin >> b[i];
        mp[b[i]]++;
    }
    ll flag=1;
    for(ll i=0;i<m;i++){
        if(mp1[b[i]] >= mp[b[i]] && mp1.find(b[i]) != mp.end()){
            flag=0;
        }
        else{
            // deb(b[i]);
            flag=1;
            break;
        } 
    }
    if(flag==1)
        cout << "No" << endl;
    else cout << "Yes" << endl;
    }
    return 0;
}