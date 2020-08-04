//https://practice.geeksforgeeks.org/problems/find-second-largest-element/0
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
    ll m1=-1,m2=-1;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        if(a[i] > m1){
            m2=m1;
            m1=a[i];
        }
        else if(a[i] > m2 && a[i] !=m1)
            m2=a[i];
    }
    cout << m2 << endl;

}
return 0;
}