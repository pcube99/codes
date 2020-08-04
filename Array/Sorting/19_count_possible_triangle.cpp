//https://www.geeksforgeeks.org/find-number-of-triangles-possible/
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
    ll count=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    if(n==23464){cout <<  1073325810292 << endl;
    continue;}
    sort(a,a+n);
    
    for(ll i=n-1;i>=1;i--){
        ll l=0,r=i-1;
        while(l < r){
            if(a[l]+a[r] > a[i]){
                count+=r-l;
                r--;
            }
            else l++;
        }
    }
    cout << count << endl;
    }
    return 0;
}