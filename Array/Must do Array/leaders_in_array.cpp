//https://www.geeksforgeeks.org/leaders-in-an-array/
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
    vector<ll> v;
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll maxi =a[n-1];
    v.push_back(a[n-1]);
    for(ll i=n-2;i>=0;i--){
        if(a[i] >= maxi){
            v.push_back(a[i]);
            maxi=a[i];
        }
    }
    for(ll i=v.size()-1;i>=0;i--){
        cout << v[i] << " ";
    }
    cout <<  endl;

}
return 0;
}