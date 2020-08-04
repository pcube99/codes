//https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/
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
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll current_sum= 0;
    ll flag=0;
    ll start=0,end=n-1;
    ll mini=INT_MAX;
    ll i=0;
    while(i < n){
        while(current_sum <= x && i < n)
            current_sum+= a[i++];
            
        while(current_sum > x && start < n){
            mini= min(mini,i-start);
            current_sum-= a[start];
            start++;
        }
        // if(current_sum >= x){
        //     flag=1;
        //     break;
        // }
        // current_sum+=a[i];
    }
    if(mini == INT_MAX)
        cout << "0" << endl;
    else cout << mini << endl;
    }
    return 0;
}