//https://www.geeksforgeeks.org/find-the-missing-number/
//Pankil Panchal
//June 2, 2019

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
    ll x=0;
    for(ll i=0;i<n-1;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n-1;i++)
        x+=a[i];
    ll sum = (n*(n+1))/2;
    cout << sum-x << endl;
}
return 0;
}