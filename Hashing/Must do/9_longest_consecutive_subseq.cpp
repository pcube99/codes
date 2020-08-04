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
    set<ll> st;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    ll maxi=INT_MIN;
    vector<ll> v;
    for(auto i: st){
        v.push_back(i);
    }
    ll count=1;
    for(ll i=1;i<v.size();i++){
        if(v[i]-v[i-1] == 1){
            count++;
            maxi=max(maxi,count);
        }
        else count=1;
    }
    maxi=max(maxi,count);
    cout << maxi << endl;
    }
    return 0;
}