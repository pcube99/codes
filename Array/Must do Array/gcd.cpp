#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll gcdd(ll a,ll b){
    if(b==0)
        return a;
    else return gcdd(b, a%b);
}

int main() {    
    ll a,b;
    cin >> a >> b;
    cout << gcdd(a,b);
    return 0;
}