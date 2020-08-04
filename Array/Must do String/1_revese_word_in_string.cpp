//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0
//https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    vector<string> v;
    string ans="";
    for(ll i=0;i<s.size();i++){
        if(s[i] != '.')
            ans+=s[i];
        else{
            v.push_back(ans);
            ans="";
        }
    }
    if(ans.size())
    v.push_back(ans);
    for(ll i=v.size()-1;i>=0;i--)
        if(i==0)
        cout << v[i] << "";
        else cout << v[i] << ".";
    cout << endl;

}
return 0;
}