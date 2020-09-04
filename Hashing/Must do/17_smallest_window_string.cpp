// https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string/0

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
    string s1,s2;
    cin >> s1 >> s2;
    ll n1=s1.size();
    ll n2=s2.size();
    ll m1[256]={0};
    ll m2[256]={0};
    if(n1 < n2){
        cout << "-1"  << endl;
        continue;
    }
    for(ll i=0;i<n2;i++)
        m2[s2[i]]++;
    ll start=0,mini=INT_MAX,index=-1,count=0;
    for(ll i=0;i<n1;i++){
        m1[s1[i]]++;
        if(m2[s1[i]] !=0 && m1[s1[i]]<=m2[s1[i]])
            count++;
        if(count ==n2){
            while(m1[s1[start]] > m2[s1[start]] || m2[s1[start]] == 0){
                if(m1[s1[start]] > m2[s1[start]])
                    m1[s1[start]]--;
                start++;
            }
            ll len=i-start+1;
            if(mini > len){
                mini=len;
                index=start;
            }
        }
    }
    if(index==-1)
        cout << "-1" << endl;
    else cout << s1.substr(index,mini) << endl;
    }
    return 0;
}