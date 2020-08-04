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
    char a[n];
    ll freq[26]={0};
    queue<char> q; 
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<n;i++){
        q.push(a[i]);
        freq[a[i]-'a']++;
        while(!q.empty()){
            if(freq[q.front()-'a'] > 1)
                q.pop();
            else{
                cout << q.front() << " ";
                break;
            }
        }
        if(q.empty())
            cout << "-1 "; 
    }
    cout << endl;
    }
    return 0;
}