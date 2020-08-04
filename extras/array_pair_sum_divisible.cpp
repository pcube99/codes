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
    ll k;
    ll flag=1;
    cin >> k;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        mp[a[i]%k]++;
    }
    if(n%2 !=0){
        cout << "False" << endl;
        continue;
    }
    // for(auto i : mp){
    //             deb2(i.first, i.second);

    // }
    for(auto i : mp){
        if(i.second ==0)
            continue;
        if(i.first == 0 && i.second%2!=0) {
            flag=0;
            break;
        }
        else if(i.first ==0 && i.second%2==0){
            mp[i.first]=0;
        }
        else if(i.first*2 == k && i.second%2==0){
            mp[i.first]=0;
            continue;
        }
        else if(i.first*2 == k && i.second%2!=0){
            flag=0;
            break;
        }        
        else if(mp.find(k-i.first) == mp.end()){
            flag=0;
            break;
        }
        else if(mp.find(k-i.first) != mp.end()){
            if(mp[i.first] != mp[k-i.first]){
                flag=0;
                break;
            }
            else{
                mp[i.first]=0;
                mp[k-i.first]=0;
            }
        }
    }
    if(flag)
        cout << "True"  << endl;
    else cout << "False" << endl;
    }
    return 0;
}