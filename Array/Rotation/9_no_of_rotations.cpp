//https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/

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
    ll mini=INT_MAX,index=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=1;i<n;i++){
        if(a[i] < a[i-1]){
            index=i;
            break;
        }
    }
    if(a[n-1] < a[n-2])
        index=n-1;
    cout << index << endl;
}
return 0;
}