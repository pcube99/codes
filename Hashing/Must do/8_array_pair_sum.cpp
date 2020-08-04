//https://www.geeksforgeeks.org/check-if-an-array-can-be-divided-into-pairs-whose-sum-is-divisible-by-k/
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
    ll a[n],sum=0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll k;
    cin >> k;
    ll flag=0;
    // if(sum != k*(n/2)){
    //     cout << "False" << endl;
    //     continue;
    // }
    ll bb[k]={0};
    for(ll i=0;i<n;i++){
        bb[(a[i]%k)]++;
    }
    for(ll i=0;i<n;i++){
        ll rem=a[i]%k;
        if(rem*2 == k){
            if(bb[rem]&1){
                flag=1;
                break;
            }
        }
        if(rem == 0){
            if(bb[rem]&1){
                flag=1;
                break;
            }
        }
        else if(bb[rem] != bb[k-rem]){
            flag=1;
            break;
        }
        
    }
   
    if(flag==1)
        cout << "False" << endl;
    else cout << "True" << endl;
    }
    return 0;
}