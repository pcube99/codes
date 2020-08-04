//https://practice.geeksforgeeks.org/problems/jumping-caterpillars/0
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n,k;
    cin >> n  >> k;
    vector<ll> seive(n+1,0);
    vector<ll> a(k,0);
    for(ll i=0;i<k;i++)
        cin >> a[i];
    for(ll i=0;i<k;i++){
        if(seive[a[i]] == 0)
        for(ll j=a[i];j<=n;j+=a[i]){
            seive[j]=1;
        }
    }
    
    ll count=0;
    for(ll i=1;i<=n;i++){
        if(seive[i] == 0)
            count++;
    }
    cout << count << endl;

}
return 0;
}