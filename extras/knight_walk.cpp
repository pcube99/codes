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
    ll n,m;
    cin >> n >> m;
    ll a[n+1][m+1];
    bool visited[n+1][m+1];
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            a[i][j]=INT_MAX;
            visited[i][j]=false;
        }
    }
    queue<pair<ll,ll> > q;
    a[x1][y1]=0;
    q.push({x1,y1});
    visited[x1][y1]=true;
    ll dx[] = {1,-1,1,-1,2,-2,2,-2};
    ll dy[] = {2,2,-2,-2,1,1,-1,-1};
    while(!q.empty()){
        pair<ll,ll> p=q.front();
        q.pop();
        for(ll i=0;i<8;i++){
            ll tx = p.first+dx[i];
            ll ty = p.second+dy[i];
            if(tx >0 && tx <=n && ty > 0 && ty <=m && visited[tx][ty]==false){
                visited[tx][ty]=true;
                if(a[tx][ty] > a[p.first][p.second]+1 ){
                    a[tx][ty]=a[p.first][p.second]+1;
                    //deb2(tx,ty);
                    q.push({tx,ty});
                }
            }
        }
        
    }
    
    if(a[x2][y2] == INT_MAX)
        cout << "-1" << endl;
    else 
        cout << a[x2][y2] << endl;
    
    }
    return 0;
}