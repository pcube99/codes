// https://www.interviewbit.com/problems/roman-to-integer/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll value(char c){
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    return -1;
}
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    ll ans=0,x=0,y=0;
    for(ll i=0;i<s.size();i++){
        if(i==s.size()-1){
            x=value(s[i]);
            ans+=x;
        }
        else{
            x=value(s[i]);
            y=value(s[i+1]);
            if(x>=y)
                ans+=x;
            else ans-=x;
        }
    }
    cout << ans << endl;
    }
    return 0;
}