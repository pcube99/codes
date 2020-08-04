//https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/
//https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/
//https://www.geeksforgeeks.org/merge-two-sorted-arrays/

//Pankil Panchal
//June 3,2019
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n,m;
    cin >> n >> m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=0;i<m;i++)
        cin >> b[i];
    ll i=0,j=0;
    vector<ll> v;
    while(i<n && j<m){
        if(a[i] < b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i < n){
        v.push_back(a[i]);
        i++;
    }
    while(j < m){
        v.push_back(b[j]);
        j++;
    }
    for(ll i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
}
return 0;
}