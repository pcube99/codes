//https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void findsum(ll a[],ll k, ll n){
    sort(a,a+n);
    ll l=0,r=n-1;
    while(l < r){
        if(a[l]+a[r] == k){
            cout << "Yes" << endl;
            return;
        }
        else if(a[l]+a[r] < k)
            l++;
        else if(a[l]+a[r] > k)
            r--;
    }
    cout << "No" << endl;
    return;
}
int main(){
ll t;
cin >> t;
while(t--){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    ll l=0,r=n-1;
    for(ll i=0;i<n;i++)
        cin >> a[i];
    findsum(a,k,n);


}
return 0;
}