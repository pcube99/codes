// https://practice.geeksforgeeks.org/problems/uncommon-characters/0

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
    ll f1[26]={0};
    ll f2[26]={0};
    for(ll i=0;i<s1.size();i++){
        f1[s1[i]-'a']=1;
    }
    for(ll i=0;i<s2.size();i++){
        f2[s2[i]-'a']=1;
    }
    for(ll i=0;i<26;i++){
        if(f1[i]==1 && f2[i]==1)
            continue;
        else if(f1[i] == 1 || f2[i]==1)
            cout << char(i+'a');
    }
    cout << endl;
    }
    return 0;
}