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
    map<char,ll> mp;
    for(ll i=0;i<s.size();i++)
        mp[s[i]]++;
    map<ll,ll> freq;
    for(auto i : mp)
        freq[i.second]++;
    if(freq.size()==1)
        cout << "1" << endl;
    else if(freq.size() ==2 && (freq.begin()->second == 1 || freq.rbegin()->second ==1) && freq.rbegin()->first-freq.begin()->first==1)
        cout << "1" << endl;
    else cout << "0" << endl;
    }
    return 0;
}