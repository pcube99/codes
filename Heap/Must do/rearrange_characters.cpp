//https://www.geeksforgeeks.org/rearrange-characters-string-no-two-adjacent/
//https://practice.geeksforgeeks.org/problems/rearrange-characters/0
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    ll n=s.size();
    map<char,ll> mp;
    for(ll i=0;i<s.size();i++){
        if(mp.find(s[i]) == mp.end())
            mp.insert(make_pair(s[i],1));
        else mp[s[i]]++;
    }
    ll maxi=INT_MIN;
    for(auto it : mp){
        if(it.second > maxi)
            maxi=it.second;
    }
    if(s.size() -maxi+1 > n/2)
        cout << "1" << endl;
    else cout << "0" << endl;
}
return 0;
}