//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem/0

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
string s = "!#$%&*@^~";
while(t--){
    ll n;
    cin >> n;
    char nut[n],bolt[n];
    map<char,ll> mp;
    mp['!']=0;
    mp['#']=0;
    mp[ '$']=0;
    mp[ '%']=0;
    mp[ '&']=0;
    mp ['*']=0;
    mp['@']=0;
    mp['^']=0;
    mp['~']=0;
    string ans="";
    for(ll i=0;i<n;i++){
        cin >> nut[i];
        mp[nut[i]]++;
    }
    for(ll i=0;i<n;i++){
        cin >> bolt[i];
        mp[bolt[i]]++;
    }
    for (auto itr= mp.begin();itr!=mp.end();itr++){
        // cout << itr->first << " " << itr->second << endl;
        if(itr->second==2){
            // cout << itr->first << " ";
            ans+=itr->first;
            ans+=" ";
        }
    }
    cout << ans << endl << ans;
    cout << endl;
}
return 0;
}