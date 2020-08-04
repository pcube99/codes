//https://practice.geeksforgeeks.org/problems/shop-in-candy-store/0s
//https://www.geeksforgeeks.org/find-minimum-maximum-amount-buy-n-candies/
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
    ll s1=0,s2=0;
    ll ni=n;
    sort(a,a+n);
    for(ll i=0;i<n;i++){
        s1+=a[i];
        n=n-k;
    }
    sort(a,a+ni,greater<ll>() );
    for(ll i=0;i<ni;i++){
        s2+=a[i];
        ni-=k;
    }
    cout << s1 << " " << s2 << endl;
    }
    return 0;
}