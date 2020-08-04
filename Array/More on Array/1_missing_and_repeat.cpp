//https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

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
    vector<ll> count(1000001,0);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        count[a[i]]++;
    }
    for(ll i=1;i<1000001;i++){
        if(count[i]>1){
            cout << i << " ";
            break;
        }
    }
    for(ll i=1;i<1000001;i++){
        if(count[i] == 0)
        {
            cout << i;
            break;
        }
    }
    cout << endl;
}
return 0;
}