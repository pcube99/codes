//https://www.geeksforgeeks.org/kth-largest-element-in-a-stream/

// https://www.geeksforgeeks.org/kth-largest-element-in-a-stream/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll k,n;
    cin >> k >> n;
    priority_queue<ll, vector<ll> ,greater<ll> > minheap;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        ll pp;
        cin >> pp;
        if(minheap.size() < k){
            if(minheap.size()< k-1)
            cout << "-1" << " ";
            
            minheap.push(pp);

        }
        else if(minheap.top() < pp){
                minheap.pop();
                minheap.push(pp);
        }
        if(minheap.size() == k)
        cout << minheap.top() << " ";
        
    }
    cout << endl;


}
return 0;
}