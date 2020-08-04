//https://www.geeksforgeeks.org/find-distinct-elements-common-rows-matrix/
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
    ll a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++)
            cin >> a[i][j];
    }
    unordered_set<ll> mp;
    ll flag=0;
    for(ll i=0;i<n;i++){
        mp.insert(a[0][i]);
    }
    for(ll i=1;i<n;i++){
        unordered_set<ll> temp;
        for(ll j=0;j<n;j++){
            temp.insert(a[i][j]);
        }
        for(auto it=mp.begin() ;it!=mp.end();){
            if(temp.find(*it) == temp.end())
                it=mp.erase(it);
            else it++;
        }
       
         if(mp.size() ==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout << "0" << endl;
        continue;
    }
    // for(ll i=0;i<n;i++){
    //     for(ll j=0;j<n;j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    
   
    // for(auto i : mp){
    //     cout << i << " ";
    // }
    cout <<mp.size() <<  endl;
    }
    return 0;
}