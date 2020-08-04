//https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
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
    ll hash[100001]={0};
    for(ll i=0;i<n;i++){
        cin >> a[i];
        hash[a[i]]++;
    }
    ll k;
    cin >> k;
    for(ll i=0;i<=100000;i++){
        if(hash[i] >= 1)
            k--;
        if(k == 0){
            cout << i << endl;
            break;}
    }

}
return 0;
}