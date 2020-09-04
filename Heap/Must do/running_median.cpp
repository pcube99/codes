//https://practice.geeksforgeeks.org/problems/find-median-in-a-stream/0

// https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/

// https://www.geeksforgeeks.org/median-of-stream-of-integers-running-integers/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    priority_queue<ll> maxheap;
    priority_queue<ll,vector<ll>, greater<ll> > minheap;
    while(n--){
        ll x;
        cin >> x;
        if(maxheap.empty() || maxheap.top() > x ){
            maxheap.push(x);
        }
        else minheap.push(x);
        if(maxheap.size() > minheap.size()+1){
            ll p=maxheap.top();
            maxheap.pop();
            minheap.push(p);
        }
        else if(maxheap.size()+1 < minheap.size()){
            ll p=minheap.top();
            minheap.pop();
            maxheap.push(p);
        }
        if(maxheap.size() == minheap.size()){
            cout << (maxheap.top() + minheap.top())/2 << endl;
        }
        else{
            if(maxheap.size() > minheap.size())
                cout << maxheap.top() << endl;
            else cout << minheap.top() << endl;
        }
    }
return 0;
}