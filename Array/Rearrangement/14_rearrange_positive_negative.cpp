#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll count=0; 
    for(ll i=0;i<n;i++){
        if(a[i] < 0){
            swap(a[count++], a[i]);
        }
    }
    for(auto it : a){
        cout << it  << " ";
    }
    return 0;
}