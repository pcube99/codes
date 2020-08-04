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
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    set<vector<ll> > s;
    ll sum=0;
    map<ll, vector<pair<ll,ll> > > mp;
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
           mp[a[i]+a[j]].push_back({i,j});
        }
    }
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            ll sum=a[i]+a[j];
            if(mp.find(k-sum) != mp.end()){
                auto it=mp[k-sum];
                ll io=mp[k-sum].size();
                for(ll u=0;u<io;u++){
                if(it[u].first != i && it[u].first!=j && it[u].second!=i && it[u].second!=j){
                vector<ll> v;
                v.push_back(a[i]);
                v.push_back(a[j]);
                v.push_back(a[it[u].first]);
                v.push_back(a[it[u].second]);
                sort(v.begin(), v.end());
                s.insert(v);
                }
                    
            }
        }
    }
    }
    if(s.size()==0){
        cout << "-1" <<endl;
        continue;
    }
    for(auto iu : s){
    for(ll p=0;p<4;p++)
        cout << iu[p] << " ";
    cout << "$";
    }
    
    cout << endl;
    }
    return 0;
}