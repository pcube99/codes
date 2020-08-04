#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
bool ispalindrome(string s){
    ll n=s.size();
    for(ll i=0;i<n/2;i++){
        if(s[i] != s[n-1-i])
            return 0;
    }
    return 1;
}
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    ll n=s.size();
    ll a[n][n] = {0};
    for(ll i=0;i<n;i++){
        a[i][i]=1;
    }
    ll i=1,k;
    for(i=1;i<n;i++){
        for(ll j=i,k=0;j<n;j++,k++){
            if(s[j]==s[k] && i==1)
                a[k][j]=2;
            else if(s[j] == s[k])
                a[k][j]=2+a[k+1][j-1];
            else
                a[k][j] = max(a[k][j-1],a[k+1][j]);
        }
    }
    cout << n-a[0][n-1] << endl;
    }
    return 0;
}