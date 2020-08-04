//https://www.geeksforgeeks.org/sort-array-wave-form-2/s
#define ll long long
using namespace std;
int main(){
ll t;
cin >> t;
while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin >> a[i];
    for(ll i=0;i<n;i+=2){
        if(i> 0 && a[i-1] > a[i])
            swap(a[i],a[i-1]);
        if(i < n-1 && a[i] < a[i+1])
            swap(a[i],a[i+1]);
    }
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}
return 0;
}