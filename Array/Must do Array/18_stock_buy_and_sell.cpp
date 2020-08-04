// Stock buy and sell 

//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0
//https://www.geeksforgeeks.org/stock-buy-sell/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    ll flag=0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    ll i=0;
    for(i=0;i<n;i++){
        ll j,k;
        // cout << "i " << i << endl;
        ll mini=a[i];
        for(j=i+1;j<n-1;j++){
            if( mini > a[j])
                mini = a[j];
            else break;
        }
        // cout << "mini " << mini << "j " << j << endl;
        for(k=j;k<n;k++){
            if(a[k] >= mini)
                mini = a[k];
            else{
                break;
            }
            
        }
        if(j-1 != k-1){
        cout << "(" << j-1 << " " << k-1 << ") ";  
        flag=1;
                i=k-1;}
        // if(k == n){
        //      cout << "(" << j << " " << k-1 << ") ";  
        //     i=k-1;
        // }
        

    }
    if(flag==0)
        cout << "No Profit";
    cout << endl;

}
return 0;
}