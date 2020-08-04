//https://practice.geeksforgeeks.org/problems/last-index-of-1/0
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    ll ans=-1;
    for(ll i=0;i<s.size();i++){
        if(s[i] == '1')
            ans=i;
    }
    cout << ans << endl;

}
return 0;
}