//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string/0
//https://www.geeksforgeeks.org/longest-palindrome-substring-set-1/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll palindrome(string a){
    ll n=a.size();
    ll flag=1;
    for(ll i=0;i<n/2;i++){
        if(a[i] != a[n-1-i])
            flag=0;
    }
    return flag;
}
int main(){
ll t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    string ans="",temp="";
    ll len=0;
    for(ll i=0;i<s.size()-1;i++){
        temp+=s[i];
        for(ll j=i+1;j<s.size();j++){
            temp+=s[j];
            if(palindrome(temp) == 1 && temp.size() > len){
                len=temp.size();
                ans=temp;
                // cout << "ans " << ans << endl;
            }
        }
        // cout << "t "<<temp << endl;
        temp="";
    }
    if(len == 0)
        ans=s[0];
    cout << ans<< endl;

}
return 0;
}