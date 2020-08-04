//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0
//https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin >> t;
while(t--){
    ll n,k;
    cin >> n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    deque<ll> q;
    for(ll i=0;i<k;i++){
        while(!q.empty() && a[i]>=a[q.back()])
            q.pop_back();
        q.push_back(i);
    }

    for(ll i=k;i<n;i++){
        cout << a[q.front()] << " ";
        while(!q.empty() && q.front() <= i-k)
            q.pop_front();
        while(!q.empty() && a[i]>=a[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    cout <<a[q.front()] << " ";

    cout << endl;
}
return 0;
}