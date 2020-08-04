//https://www.geeksforgeeks.org/alternative-sorting/
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
    ll x=n-1,y=0;
    sort(a,a+n);
    while(y < x){
        cout << a[x--] << " ";
        cout << a[y++] << " ";
    }
    if(n%2 != 0)
        cout << a[y] << " ";
    cout << endl;
}
return 0;
}