#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll heapsize=0;
ll left(ll i){
    return 2*i+1;}
ll right(ll i){
    return 2*i+2;}
ll parent(ll i){
    return i/2;}
ll getMin(ll *a){
    return a[0];}
void heapify(ll *a, ll i, ll n){
    ll l= left(i);
    ll r = right(i);
    ll largest=i;
    if(l < n && a[l] > a[largest] )
        largest=l;
    if(r < n && a[r] > a[largest])
        largest=r;
    if(largest != i){
        swap(a[i], a[largest]);
        heapify(a, largest,n);
    }
}

void heapsort(ll *a,ll n){
    for(ll i=n/2;i>=0;i--){
        heapify(a,i,n);
    }
    for(ll i=n-1;i>=0;i--){
        swap(a[0], a[i]);
        heapify(a,0,i);
    }
}
void insert(ll key,ll *a){
        a[heapsize]=key;
        heapsize++;
        // heapify(a,heapsize/2,heapsize);
        heapsort(a,heapsize);
        //  for(ll i=0;i<heapsize;i++)  
        //     cout << a[i] << " ";
        // cout << "------------" << endl;
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll b[n]={0};
    for(ll i=0;i<n;i++){
        insert(a[i],b);
        if(i%2==0)
            cout << b[i/2] << endl;
        else cout << (b[i/2 +1]+b[i/2] )/2 << endl;
    }
    heapsort(a,n);
    // for(ll i=0;i<n;i++)
    //     cout << a[i] << " ";
    // cout << endl;
    return 0;   
}