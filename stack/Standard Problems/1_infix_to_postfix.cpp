//https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll prec(char c){
    if(c == '^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c == '+' || c=='-')
        return 1;
    else
    return -1;
}

int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    string ans="";
    stack<char> st;
    st.push('N');
    for(ll i=0;i<s.size();i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i]>='A' && s[i] <= 'Z'))
            ans+=s[i];
        else if(s[i] == '(')
            st.push('(');
        else if(s[i] == ')'){
            while(st.top() != 'N' && st.top() != '('){
                char x = st.top();
                ans+=x;
                st.pop();
            }
            if(st.top() == '('){ 
                char c = st.top(); 
                st.pop(); 
            } 
        }
        else{
            while(st.top()!= 'N' && prec(s[i]) <= prec(st.top())){
                char x=st.top();
                ans+=x;
                st.pop();
            }
            st.push(s[i]); 
        }
    }
    while(st.top() != 'N'){
        char xx=st.top();
        ans+=xx;
        st.pop();
    }
    cout << ans << endl;
    }
    return 0;
}