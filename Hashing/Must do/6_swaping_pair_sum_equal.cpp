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
    ll n,m;
    cin >> n >> m;
    ll a[n];
    map<ll,ll> mp;
    map<ll,ll> mp1;
    ll s1=0,s2=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        s1+=a[i];
    }
    ll b[m];
    for(ll i=0;i<m;i++){
        cin >> b[i];
        s2+=b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    ll i=0,j=0;
    ll flag=1;
    ll diff=abs(s1-s2);
    while(i<n && j < m){
        if(abs(a[i]-b[j]) == diff/2){
            cout << "1" << endl;
            flag=0;
            break;
        }
        else if(a[i] > b[j])
            i++;
        else j++;
    }
    if(flag)
        cout << "-1" << endl;
    
    }
    return 0;
}