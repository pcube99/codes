//https://practice.geeksforgeeks.org/problems/maximum-index/0
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    vector<ll> a(n,0);
        vector<ll> left(n,0);

    vector<ll> right(n,0);

    for(ll i=0;i<n;i++)
        cin >> a[i];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(ll i=1;i<n;i++)
        left[i] = min(left[i-1],a[i]);
    for(ll i=n-2;i>=0;i--)
        right[i]=max(right[i+1],a[i]);
    ll i=0,j=0,ans=0;
    while(i<n && j<n){
        if(left[i] <= right[j]){
            ans=max(ans, j-i);
            j++;
        }
        else i++;
    }
    cout << ans << endl;
}
return 0;
}