// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times/0

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
    unordered_map<ll, ll > mp;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    // for(auto i : mp)
    //   cout << i.first << " " << i.second.first;
    //     cout << endl;
    ll flag=0,mini=INT_MAX,index;
    for(ll i=0;i<n;i++){
        if(mp[a[i]] == k){
            cout << a[i] << endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << "-1" << endl;
    }
    return 0;
}