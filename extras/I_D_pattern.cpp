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
    string s;
    cin >> s;
    ll n=s.size();
    string ans="";
    ll x=n+1,y=1;
    ll i=0;
    stack<ll> st;
    st.push(1);
    while(i<n){
        if(s[i] == 'D')
            st.push(++y);
        if(s[i] == 'I'){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            st.push(++y);
        }
        
        i++;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    
    cout <<endl;
    }
    return 0;
}