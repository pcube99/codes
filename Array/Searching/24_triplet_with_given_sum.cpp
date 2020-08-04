//https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
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
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll flag=0;
    for(ll i=n-1;i>=1;i--){
        ll l=0,r=i-1;
        while(l < r){
            if(a[l]+a[r]+a[i] == k){
                cout << "1" << endl;
                flag=1;
                break;
            }
            else if(a[l]+a[r]+a[i] < k)
                l++;
            else r--;
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        cout << "0" << endl;
    }
    return 0;
}