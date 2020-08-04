//https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/
//shell sort algorithm


#include<bits/stdc++.h>
#define ll long long
using namespace std;
void merge(ll *a,ll *b, ll n1, ll n2){
    make_heap(b,b+n2,greater<ll>() );
    for(ll i=0;i<n1;i++){
        if(a[i] > b[0]){
            pop_heap(b,b+n2, greater<ll>());
            ll temp=a[i];
            a[i]=b[n2-1];
            b[n2-1]=temp;
            push_heap(b,b+n2,greater<ll>());
        }
        
    }
    make_heap(b,b+n2);
    sort_heap(b,b+n2);
}
int main(){
ll t;
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin >> t;
while(t--){
ll n1,n2;
    cin >> n1 >> n2;
    ll a[n1],b[n2];
    for(ll i=0;i<n1;i++)
        cin >> a[i];
    for(ll i=0;i<n2;i++)
        cin >> b[i];
    merge(a,b,n1,n2);
    for(ll i=0;i<n1;i++)
        cout << a[i] << " ";
    for(ll i=0;i<n2;i++)
        cout << b[i] << " ";
    cout << endl;
}
return 0;
}