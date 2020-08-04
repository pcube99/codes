//https://www.geeksforgeeks.org/to-find-smallest-and-second-smallest-element-in-an-array/
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
    ll m1=INT_MAX,m2=-1;
    for(ll i=0;i<n;i++){
        if(m1 > a[i]){
            m2=m1;
            m1=a[i];
        }
        else if(a[i] < m2  && a[i]!=m1){
            m2=a[i];
        }
    }
    if(m2 == INT_MAX)
        cout << "-1" << endl;
    else cout << m1 << " " << m2 << endl;
}
return 0;
}