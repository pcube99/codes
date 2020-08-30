// https://practice.geeksforgeeks.org/problems/rotate-bits/0
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll left(ll n, ll d) { 
    return (n << d)|(n >> (16 - d)); 
} 
ll right(ll n, ll d) { 
    return (n >> d)|(n << (16 - d)); 
} 
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    long long n,d;
    cin >> n >> d;
    ll nn=n,nnn=n,nnnn=n;
    d=d%16;
    cout <<left(n,d) << endl;
    cout <<( (right(n,d))& 0xffff)<< endl;
    }
    return 0;
}