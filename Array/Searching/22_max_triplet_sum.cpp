//https://www.geeksforgeeks.org/maximum-triplet-sum-array/
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
    ll maxi1=INT_MIN,maxi2=INT_MIN,maxi3=INT_MIN;
    for(ll i=0;i<n;i++){
        if(a[i] > maxi1){
            maxi3=maxi2;
            maxi2=maxi1;
            maxi1=a[i];
        }
        else{
            if(a[i] > maxi2){
                maxi3=maxi2;
                maxi2=a[i];
            }
            else if(a[i] > maxi3)
                maxi3=a[i];
        }
    }
    
    cout << maxi1+maxi2+maxi3 << endl;
    }
    return 0;
}