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
    vector<string> v;
    for(ll i=0;i<n;i++){
        string x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    string ans="";
    ll mini = min(v[0].size(), v[v.size()-1].size());
    for(ll i=0;i<mini;i++){
        if(v[0][i] == v[v.size()-1][i])
            ans+=v[0][i];
        else break;
    }
    if(ans.size()==0)
        cout << "-1" <<endl;
    else
    cout << ans << endl;
    }
    return 0;
}