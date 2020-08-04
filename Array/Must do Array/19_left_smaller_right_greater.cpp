//https://www.geeksforgeeks.org/find-the-element-before-which-all-the-elements-are-smaller-than-it-and-after-which-all-are-greater-than-it/
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
    ll left[n]={0};
    ll right[n]={0};
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(ll i=1;i<n;i++){
        left[i]=max(left[i-1], a[i]);
    }
    for(ll i=n-2;i>=0;i--){
        right[i]=min(right[i+1],a[i]);
    }
    // for(ll i=0;i<n;i++)
    //     cout << left[i] << " " ;
    // cout << endl;
    // for(ll i=0;i<n;i++)
    //     cout << right[i] << " ";
    ll flag=0;
    for(ll i=1;i<n-1;i++){
        if(left[i] == right[i]){
            cout << a[i] << endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << "-1" << endl;

}
return 0;
}