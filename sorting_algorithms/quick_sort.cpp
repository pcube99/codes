#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
ll partition(vector<ll> &a,ll l, ll r){
    ll pivot=a[r];
    ll i = l-1;
    for(ll j=l;j<=r-1;j++){
        if(a[j] <= pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}
void quicksort(vector<ll> &a, ll l, ll r){
    if(l < r){
        ll p = partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}

int main() {
    fastio;
    ll n;
    cin >> n;
    // ll a[n];
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll j,key;
    quicksort(a,0,n-1);
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}