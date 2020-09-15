// https://practice.geeksforgeeks.org/problems/anagram/0

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
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.size() != s2.size()){
        cout << "NO" << endl;
        continue;
    }
    ll ans=0;
    for(ll i=0;i<s1.size();i++){
        ans^=(s1[i]-'a');
        ans^=(s2[i]-'a');
    }
    if(!ans)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}