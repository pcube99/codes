//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll m;
    cin >> m;
    sort(a,a+n);
    ll diff=0;
    ll ans= INT_MAX;
    for(ll i=0;i<=n-m;i++){
        diff = a[m-1+i]-a[i];
        if(diff < ans)
            ans=diff;
        // ans = min(ans,diff);
    }
    cout << ans << endl;

}
return 0;
}