//Pankil Panchal
//June 2, 2019

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(false);
cout.tie(false);
ll t;
cin >> t;
while(t--){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    ll flag=0;
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll sum=0;
    ll start=0,end=0;
    sum+=a[start];
    while(end < n){
        if(sum == k){
            cout << start+1 << " " << end+1 << endl;
            flag=1;
            break;
        }
        else if(sum < k){
            end++;
            sum+=a[end];
        }
        else{
            sum-=a[start];
            start++;
        }
    }
    if(sum > k){
        while(start != end){
            sum-=a[start];
            start++;
            if(sum == k){
                cout << start+1 << " " << end+1 << endl;
                flag=1;
                break;
            }
            else if(sum < k)
                break;
        }
    }
    if(flag==0) 
        cout << "-1" << endl;
}
return 0;
}