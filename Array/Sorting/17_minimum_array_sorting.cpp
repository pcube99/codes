//https://www.geeksforgeeks.org/minimum-length-unsorted-subarray-sorting-which-makes-the-complete-array-sorted/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll start=0,end=n-1,i1=0,i2=0;
    for(i1=0;i1<n-1;i1++){
        if(a[i1] > a[i1+1]){
            break;
        }
    }
    if(i1 == n-1){
        cout << "0 0" << endl;
        continue;
    }
    for( i2=n-1;i2>0;i2--){
        if(a[i2] < a[i2-1]){
            break;
        }
    }
    ll mini=a[i1],maxi=a[i1];
    for(ll i=i1;i<=i2;i++){
        mini=min(mini, a[i]);
        maxi=max(maxi, a[i]);
    }
    for(ll i=0;i<i1;i++){
        if(a[i] > mini){
            i1=i;
            break;
        }
    }
    
    for(ll i=n-1;i>=i2+1;i--){
        if(a[i] < maxi){
            i2=i;
            break;
        }
    }
    cout << i1 << " " << i2 << endl;
    }
    return 0;
}