//https://www.geeksforgeeks.org/convert-array-into-zig-zag-fashion/

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
    for(ll i=0;i<n-1;i++){
        if(i%2 == 0){
            if(a[i] > a[i+1])
                swap(a[i], a[i+1]);
        }
        else{
            if(a[i]  < a[i+1])
                swap(a[i],a[i+1]);
        }
    }
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";

    cout << endl;
}
return 0;
}