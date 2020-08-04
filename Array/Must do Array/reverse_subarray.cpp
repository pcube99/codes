//https://www.geeksforgeeks.org/reverse-an-array-in-groups-of-given-size/

    cout << endl;

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=0;i<n;i+=k){
        ll left=i;
        ll right = min(i+k-1, n-1);
        while(left < right){
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

}
return 0;
}