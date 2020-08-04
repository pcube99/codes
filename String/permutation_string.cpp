#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
vector<string> v;
void perm(string s,ll i){
    if(i == s.size()-1){
        v.push_back(s);
        return;
    }
    for(ll j=i+1;j<s.size();j++){
        swap(s[j],s[i+1]);
        perm(s,i+1);
    }
}

int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
        v.clear();
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    perm(s,-1);
    sort(v.begin(),v.end());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    }
    return 0;
}