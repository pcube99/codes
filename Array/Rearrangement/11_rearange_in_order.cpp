//https://www.geeksforgeeks.org/rearrange-array-order-smallest-largest-2nd-smallest-2nd-largest/
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
    sort(a,a+n);
    ll i=0,j=n-1;
    while(i<j){
        cout << a[i++] << " " << a[j--] <<" "; 
    }
    if(n%2 !=0)
        cout <<  a[n/2];
    cout << endl;

}
return 0;
}