//https://practice.geeksforgeeks.org/editorial.php?pid=1991

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
    ll a[n],b[m];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<m;i++){
        cin >> b[i];
    }
    ll i=0,j=0;
    sort(a,a+n);
    sort(b,b+m);
    ll sum1=0,sum2=0;
    ll ans=0;
    while(i < n && j < m){
        if(a[i] < b[j])
            sum1+=a[i++];
        else if(a[i] > b[j])
            sum2+=b[j++];
        else{
            ll xx=a[i];
            while(a[i] == xx && i < n)
                sum1+=a[i++];
            while(b[j] == xx && j < m)
                sum2+=b[j++];
            ans+=max(sum1,sum2);
            sum1=0;
            sum2=0;
        }
    }
    while(i < n)
        sum1+=a[i++];
    while(j < m)
        sum2+=b[j++];
    ans+=max(sum1,sum2);
    cout <<  ans << endl;
    
    }
    return 0;
}