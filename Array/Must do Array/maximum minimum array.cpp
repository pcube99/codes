//https://www.geeksforgeeks.org/rearrange-array-maximum-minimum-form-set-2-o1-extra-space/
//Pankil Panchal
//June 3,2019

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
    ll i=0,j=n-1;
    while(i<j){
        cout << a[j] << " " << a[i] << " ";
        i++;
        j--;
    }
    if(n%2 !=0)
        cout << a[n/2];
    cout << endl;
}
return 0;
}