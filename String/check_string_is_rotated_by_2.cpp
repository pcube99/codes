// https://www.geeksforgeeks.org/check-string-can-obtained-rotating-another-string-2-places/

// https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places/0

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
int main() {
    fastio;
    ll t;
    cin >> t;
    while(t--){
    string s1,s2;
    cin >> s1 >> s2;
    string s3=s1;
    rotate(s1.begin(), s1.begin()+2,s1.end());
    rotate(s3.begin(), s3.begin()+s3.size()-2,s3.end());
    if(s1 == s2 || s3==s2)
        cout << "1" << endl;
    else cout << "0" << endl;
    }
        return 0;

}