// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not/0

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
        map<ll,ll> mp;

    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll b[n];
    for(ll i=0;i<n;i++){
        cin >> b[i];
        mp[b[i]]--;
    }
    ll flag=0;
    for(auto i : mp){
        if(i.second !=0){
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "0" << endl;
    else cout << "1" <<endl;
    }
    return 0;
}