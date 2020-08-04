//https://www.geeksforgeeks.org/quickly-find-multiple-left-rotations-of-an-array/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=k;i<n+k;i++){
        cout << a[i%n] << " ";
    }
    cout << endl;
}
return 0;
}