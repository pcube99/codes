//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
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
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll maxi=INT_MIN;
    ll current_max=0;
    for(ll i=0;i<n;i++){
        current_max+=a[i];
        if(maxi < current_max)
            maxi = current_max;
        if(current_max < 0)
            current_max=0;
    }
    cout << maxi << endl;

}
return 0;
}