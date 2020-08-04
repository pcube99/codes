//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent/
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
    ll s2=0,s1=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        if(i%2 == 0)
            s1= max(s1+a[i], s2);
        else s2= max(s2+a[i],s1);
    }

    cout << max(s1,s2) << endl;
}
return 0;
}