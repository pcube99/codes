//https://www.geeksforgeeks.org/nearly-sorted-algorithm/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin >> t;
while(t--){
ll n ,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    if(a[n-1] < k){
        cout << "-1" << endl;
        continue;
    }
    else{
        cout << a[n-1]-k << endl;
    }

}
return 0;
}