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
    ll n,m;
    cin >> n >> m;
		ll x,y,w;

    vector<pair<ll,ll> > adj[n];
	  for(ll i=0;i<m;i++){
        	cin >> x >> y >> w;
			adj[x-1].push_back({y-1,w});
			adj[y-1].push_back({x-1,w});
    }
	
	ll dis[n];
	for(ll i=0;i<n;i++)
		dis[i]=INT_MAX;

  
    priority_queue<pair<ll, ll> , vector<pair<ll,ll> > , greater<pair<ll,ll > > > q;
	q.push({0,0});
	dis[0]=0;
	while(!q.empty()){
		auto u=q.top().second;
		q.pop();
		for(auto v : adj[u]){
			ll wt = v.second;
			ll vv = v.first;
			if(dis[vv] > dis[u]+wt){
				dis[vv] =dis[u]+wt;
				q.push({dis[vv],vv});
			}
		}
	}
	for(ll i=1;i<n;i++)
		cout << dis[i] << " ";

    return 0;
}