// https://practice.geeksforgeeks.org/problems/find-optimum-operation/0

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
    ll n;
    cin >> n;
    int c=0;
    while(n > 0){
        if(n%2 == 0){
            c++;
            n/=2;
        }
        else {
            c++;
            n--;
        }
    }
    cout << c << endl;
    }
    return 0;
}