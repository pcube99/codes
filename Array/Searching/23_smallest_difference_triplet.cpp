//https://www.geeksforgeeks.org/smallest-difference-triplet-from-three-arrays/
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
    ll a[n],b[n],c[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n;i++){
        cin >> b[i];
    }
    for(ll i=0;i<n;i++){
        cin >> c[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    ll i=0,j=0,k=0;
    ll diff=INT_MAX;
    ll a1,a2,a3;
    while(i < n && j < n && k< n){
        ll sum=a[i]+b[j]+c[k];
        ll mini = min(a[i], min(b[j],c[k]));
        ll maxi = max(a[i], max(b[j],c[k]));
        // deb2(maxi,mini);
        if(mini == a[i])
            i++;
        else if(mini == b[j])
            j++;
        else k++;
        if(diff > (maxi-mini)){
            diff=maxi-mini;
            a1=maxi;
            a2=sum-maxi-mini;
            a3=mini;
        }
    }
    cout << a1 << " " << a2 << " " << a3 << endl;
    
    }
    return 0;
}