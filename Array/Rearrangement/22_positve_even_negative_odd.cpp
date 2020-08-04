//https://www.geeksforgeeks.org/array-data-structure/#rearrange
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rearrange(ll a[], ll n) 
{ 
    ll positive = 0, negative = 1; 
    while (true) { 
        while (positive < n && a[positive] >= 0) 
            positive += 2; 

        while (negative < n && a[negative] <= 0) 
            negative += 2; 
  
        if (positive < n && negative < n) 
            swap(a[positive], a[negative]); 
        else
            break; 
    } 
} 
int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    rearrange(a,n);
    for(auto it : a){
        cout << it  << " ";
    }
    return 0;
}   