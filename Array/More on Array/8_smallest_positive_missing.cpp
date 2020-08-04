//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/0
//https://www.geeksforgeeks.org/find-the-smallest-positive-number-missing-from-an-unsorted-array/
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
    ll mini = INT_MAX;
    ll index;
    for(ll i=0;i<n;i++){
        if(a[i]>=0 && mini > a[i]){
            mini=a[i];
            index=i;
        }
    }
    // cout << index  << " dd " << a[index] <<  endl;
    if(a[index]-1 > 0){
        cout << "1" << endl;
        continue;}
    ll flag=0;
    for(ll i=index;i<n-1;i++){
        if(a[i+1]-a[i] > 1){
            cout << a[i]+1 << endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << a[n-1]+1 << endl;

}
return 0;
}