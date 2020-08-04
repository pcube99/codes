//https://www.geeksforgeeks.org/print-distinct-elements-given-integer-array/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(a) cout << #a << ": " << (a) << endl;
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
    ll a[n];
    ll temp[10]={0};
    for(ll i=0;i<n;i++){
        cin >> a[i];
        ll xx=a[i];
        while(xx){
            int t=xx%10;
            // cout << t << endl;
            xx/=10;
            temp[t]++;
        }
    }
    for(int i=0;i<10;i++){
        if(temp[i]>0)
            cout << i << " ";
    }
    cout << endl;
}
    return 0;

}