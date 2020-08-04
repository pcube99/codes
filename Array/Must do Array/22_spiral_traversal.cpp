//https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ll t;
cin >> t;
while(t--){
    ll n,m;
    cin >> n >> m;
        ll a[n][m];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)
            cin >> a[i][j];
    }
    ll i=0;
    ll row=0,col=0;
    while(row < n && col<m){
        for(i=col;i<m;i++)
            cout << a[row][i] << " ";
        row++;
        for(i=row;i<n;i++)
            cout << a[i][m-1] << " ";
        m--;
        if(row < n){
            for(i=m-1;i>=col;i--)
                cout << a[n-1][i] << " ";
            n--;
        }
        if(col < m){
            for(i=n-1;i>=row;i--)
                cout << a[i][col] << " ";
            col++;  
        }
    }   
    cout << endl;
}
return 0;
}