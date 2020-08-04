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
    string s;
    cin >> s;
    ll ans=0;
    ll flag=0;
    map<char,ll> mp;
    ll n=s.size();
    for(ll i=0;i<n;i++){
        if(mp.find(s[i]) != mp.end()) {
            cout << s[i] << endl;
            flag=1;
            break;
        }
        else mp[s[i]]=1;
    }
    if(!flag)
        cout << "-1" << endl;
    }
    return 0;
}