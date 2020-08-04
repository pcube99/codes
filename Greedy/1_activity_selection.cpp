//https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
bool mycomp(pair<ll,ll> a, pair<ll,ll> b){
    return a.second < b.second;
}
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n;i++){
        cin >> b[i];
    }
    pair<ll,ll> p[n];
    ll c=1;
    for(ll i=0;i<n;i++){
        p[i]=make_pair(a[i],b[i]);
    }
    sort(p,p+n,mycomp);
    ll y=0;
    for(ll i=1;i<n;i++){
        if(p[y].second <= p[i].first){
            c++;
            y=i;
        }
    }
    cout << c << endl;
    }
    return 0;
}