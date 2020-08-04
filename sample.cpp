#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll findd(ll u, ll parent[]){
	if(parent[u] == -1)
		return u;
		return findd(parent[u], parent);
}
void unionn(ll u, ll v,ll parent[]){
	ll up =findd(u,parent);
	ll vp =findd(v,parent);
	if(up != vp)
	parent[up]=vp;
}
int main() {
    fastio;
	unordered_set<int> st;
	st.insert(1);
	st.insert(10);
	st.insert(5);
	st.insert(1);
	for(auto i : st)
		cout << i << " ";
    return 0;
}