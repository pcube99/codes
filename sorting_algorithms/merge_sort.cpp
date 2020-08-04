#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
void merge(ll a[], ll l , ll m, ll r) {
    ll n1=m-l+1;
    ll n2=r-m;
    ll p=0;
    ll left[n1],right[n2];
    for(ll i=0;i<m-l+1;i++)
        left[p++]=a[l+i];
    p=0;
    for(ll i=0;i<r-m;i++)
        right[p++]=a[i+m+1];
    ll i=0,j=0;
    ll k=l;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            a[k++]=left[i++];
        }
        else 
            a[k++]=right[j++];
    }
    while(i < n1)
        a[k++]=left[i++];
    while(j < n2)
        a[k++]=right[j++];
}

void mergesort(ll a[], ll l, ll r) {
    if(l < r){
    ll mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    merge(a,l,mid,r);
    }
}


int main() {
    fastio;
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll j,key;
    mergesort(a,0,n-1);
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}