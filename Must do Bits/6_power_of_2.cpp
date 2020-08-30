// https://practice.geeksforgeeks.org/problems/power-of-2/0
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
    if(n==0){
        cout << "NO" << endl;
        continue;
    }
    ll pp=n-1;
    if((n&(n-1)) == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}