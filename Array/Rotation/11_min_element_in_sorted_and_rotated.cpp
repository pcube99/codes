//https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll search(ll a[],ll n,ll low, ll high){
    if (high < low) 
        return a[0];  
    if (high == low)
        return a[low];  
    ll mid=(low+high)/2;
    if(mid < high && a[mid]< a[mid-1])
        return a[mid];
    if(mid < high && a[mid] > a[mid+1])
        return a[mid+1];
    if(a[high] > a[mid] )
        return search(a,n,low,mid-1);
    return search(a,n,mid+1,high);
}
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll a[n];
    
    for(ll i=0;i<n;i++)
        cin >> a[i];
    cout << search(a,n,0,n-1) << endl;
}
return 0;
}