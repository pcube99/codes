// https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits/0
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
    ll mask=3;
    for(ll i=0;i<8;i+=2){
        ll temp=(n&mask);
        if(temp!=mask && temp >0){
            n^=mask;
        }
        mask=mask<<2;
        
    }
    cout << n << endl;
    }
    return 0;
}