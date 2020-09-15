// https://www.interviewbit.com/problems/longest-palindromic-substring/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll ispalindrome(string a){
    ll n=a.size();
    for(ll i=0;i<n/2;i++){
        if(a[i] != a[n-1-i]){
            return 0;
        }
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
    string temp="",ans="";
    ll curr=0;
    for(ll i=0;i<n-1;i++){
        temp+=s[i];
        for(ll j=i+1;j<n;j++){
            temp+=s[j];
            // deb(temp);
            if((ispalindrome(temp)==1)&& temp.size() > curr){
                // deb2(temp, curr);
                curr=temp.size();
                ans=temp;
            }
        }
        temp="";
    }
    if(curr==0)
        ans=s[0];
    cout <<  ans << endl;
    }
    return 0;
}