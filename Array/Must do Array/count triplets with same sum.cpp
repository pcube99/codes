//https://practice.geeksforgeeks.org/problems/count-the-triplets/0
//Pankil Panchal
//June 2,2019
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
    ll count=0;
    for(ll i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    ll start=0,end=0;
     for(ll i=n-1;i>=2;i--){
	   start=0;
	   end=i-1;
    while(start < end){
        if(a[start]+a[end] == a[i]){
            count++;
            // cout << a[start] << " " << a[end] << "  = " << a[i] << endl;
            start++;
        }
        else if(a[start]+a[end] > a[i])
            end--;
        else if(a[start]+a[end] < a[i])
            start++;
    }
     }
    cout << (count == 0 ? -1 : count)<< endl;
}
return 0;
}