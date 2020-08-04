//https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(string s1, string s2){
	return (stoi(s1+s2)>stoi(s2+s1));
}
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll a[n];
    vector<string> v(n,"");
    for(ll i=0;i<n;i++){
        cin >> v[i];
        // v.push_back(to_string(a[i]));
    }
    sort(v.begin() ,v.end(),compare );
    for(ll i=0;i<v.size();i++)
        cout << v[i];

    cout << endl;
}
return 0;
}