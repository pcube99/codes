//https://www.geeksforgeeks.org/count-number-binary-strings-without-consecutive-1s/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll count(ll n){
    ll a[n]={0},b[n]={0};
    a[0]=b[0]=1;
    for(ll i=1;i<n;i++){
        a[i]=(a[i-1]+b[i-1])%1000000007;
        b[i]=a[i-1];
    }
    return (a[n-1]+b[n-1])%1000000007;
}
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    cout << count(n) << endl;

}
return 0;
}