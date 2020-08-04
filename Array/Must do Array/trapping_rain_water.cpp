//https://www.geeksforgeeks.org/trapping-rain-water/

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
    ll left[n]={0};
    ll right[n]={0};
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(ll i=1;i<n;i++){
        left[i]=max(left[i-1],a[i]);
    }
    for(ll i=n-2;i>=0;i--){
        right[i] = max(right[i+1], a[i]);
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans+= min(left[i],right[i]) - a[i];
    }
    cout <<  ans << endl;
}
return 0;
}