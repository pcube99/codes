//https://www.geeksforgeeks.org/minimize-the-maximum-difference-between-the-heights/

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
    cin >>k >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    ll ans=a[n-1]-a[0];
    ll maxi=a[n-1]-k,mini=a[0]+k;
    if(maxi < mini)
        swap(maxi,mini);
    for(ll i=1;i<n-1;i++){
        ll xx=a[i]-k;
        ll yy=a[i]+k;
        if(xx >= mini || yy <= maxi)
            continue;
        if(maxi- xx <= yy-mini)
            mini=xx;
        else maxi=yy;
    }
    cout << min(ans, maxi-mini) << endl;
    }
    return 0;
}