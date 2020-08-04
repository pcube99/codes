//https://www.geeksforgeeks.org/equilibrium-index-of-an-array/
//Pankil PAnchal
//June 4, 2019
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n,flag=0;
    cin >> n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll s1 = 0;
    for(ll i=0;i<n;i++){
        sum-=a[i];
        if(sum == s1){
            flag=1;
            cout << i+1 << endl;
            break;
        }
        s1+=a[i];

    }
    if(flag==0)
        cout << "-1" <<endl;
}
return 0;
}