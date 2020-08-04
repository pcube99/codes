//https://www.geeksforgeeks.org/two-elements-whose-sum-is-closest-to-zero/
#define ll long long
using namespace std;
bool compare(ll x , ll y){
    return abs(x) < abs(y);
}
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,compare);
    ll x,y;
    ll mini =INT_MAX;
    for(ll i=1;i<n;i++){
        if(abs(a[i]+a[i-1]) <= mini){
            mini = abs(a[i]+ a[i-1]);
            x = i;
            y=i-1;
        }
    }
    cout << a[x]+a[y] << endl;
    

}
return 0;
}