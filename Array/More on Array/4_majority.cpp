//https://practice.geeksforgeeks.org/problems/majority-element/0
#include<bits/stdc++.h>
#include<iostream>
typedef long long int ll;
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t; 
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll index=0,count=1;
        for(ll i=1;i<n;i++)
        {
            if(v[index]==v[i])
                count++;
            else 
                count--;
            
            if(count==0){
                index=i;
                count=1;
            }
        }
        
        count=0;
        for(ll i=0;i<n;i++){
            if(v[i]==v[index])
                count++;
        }
        
        if(count>n/2)
            cout<<v[index];
        else 
            cout<<-1;
        cout<<endl;
    }
    return 0;
}