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
    string s;

    while(t--){
    // cin >> s;
    getline(cin >> ws,s);
    ll flag[256]={0};
    for(ll i=0;i<s.size();i++){
        if(flag[s[i]])
            continue;
        else{
            cout << s[i];
            flag[s[i]]=1;
        }
    }
    cout << endl;
    }
    return 0;
}