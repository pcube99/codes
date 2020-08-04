//https://www.geeksforgeeks.org/next-greater-element/
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
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    stack<ll> st;
    ll ans[n]={0};
    st.push(0);
    for(ll i=1;i<n;i++){
        while(!st.empty() && a[i] >= a[st.top()]){
            ans[st.top()]= a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()]=-1;
        st.pop();
    }
    for(ll i=0;i<n;i++) 
        cout << ans[i] << " ";
    cout <<endl;
    }
    return 0;
}