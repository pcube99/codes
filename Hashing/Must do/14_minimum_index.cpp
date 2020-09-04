// https://practice.geeksforgeeks.org/problems/minimum-indexed-character/0

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
    string s,s1;
    cin >> s >> s1;
    ll index=-1,mini=INT_MAX;
    ll a[26];
    memset(a,-1,sizeof(a));
   
    for(ll i=0;i<s.size();i++){
        if(a[s[i]-'a'] == -1)
            a[s[i]-'a']=i;
    }
    //   for(ll i=0;i<26;i++)    
    //     cout << a[i] << " ";
    for(ll i=0;i<s1.size();i++){
        if(a[s1[i]-'a'] < mini && a[s1[i]-'a']!=-1){
            mini=a[s1[i]-'a'];
            index=i;
            // deb(s1[index]);
        }
    }
    if(index==-1)
        cout << "$" << endl;
    else cout << s1[index] << endl;
    }
    return 0;
}