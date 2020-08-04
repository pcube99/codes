//https://www.geeksforgeeks.org/double-first-element-move-zero-end/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll checki(vector<pair<ll,ll> > v){
	map<ll,ll> m;
	for(ll i=0;i<v.size();i++){
		m[v[i].first]++;
		m[v[i].second]++;
	}
	for(auto i : m){
		if(i.second == v.size())
			return 1;
	}
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	vector<pair<ll,ll> > v;
	for(ll i=0;i<m;i++){
		ll a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	ll x=v[0].first,y=v[0].second;
	vector<pair<ll,ll> > v1,v2;
	for(ll i=1;i<v.size();i++){
		if(x != v[i].first && x!= v[i].second)
			v1.push_back(make_pair(v[i].first, v[i].second));
		if(y != v[i].first && y!= v[i].second)
			v2.push_back(make_pair(v[i].first, v[i].second));
	}
	if(v1.size() == 0 && v2.size() == 0){
		cout << "YES";
		return 0;
	}
	if(checki(v1)==1 || checki(v2) == 1)
	cout << "YES";
	else cout << "NO";
	return 0;
}