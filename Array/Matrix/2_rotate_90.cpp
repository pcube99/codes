//https://www.geeksforgeeks.org/inplace-rotate-square-matrix-by-90-degrees/
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
    ll a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++)
        cin >> a[i][j];
    }
    
    for(ll i=n-1;i>=0;i--){
        for(ll j=0;j<n;j++){
            cout << a[j][i] << " ";
        }
    }
    cout << endl;
    }
    return 0;
}s