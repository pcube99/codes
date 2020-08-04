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
    string s;
    cin >> s;
    ll n=s.size();
    ll start=0,end=0;
    ll a[26];
    for(ll i=0;i<26;i++)
        a[i]=-1;
    ll maxi=1;
    for(ll i=0;i<n;i++){
        if(a[s[i]-'a'] == -1){
            a[s[i]-'a']=i;
            end++;
        }
        else{
            if(a[s[i]-'a'] < start){
                a[s[i]-'a']=i;
                end++;
            }
            else{
                start=a[s[i]-'a']+1;
                a[s[i]-'a']=i;
                end++;
            }
        }
        maxi=max(maxi, (end-start));
        // deb3(maxi,end,start);
    }
    cout << maxi << endl;
    }
    return 0;
}