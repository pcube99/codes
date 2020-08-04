https://www.geeksforgeeks.org/sort-an-array-according-to-absolute-difference-with-given-value/
using namespace std;
int k;
bool comp(const int &a,const int &b){
    return abs(a-k) < abs(b-k);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n>>k;
	    vector<int> vec(n);
	    for(int i = 0;i<n;i++)
	        cin>>vec[i];
	        
	    stable_sort(vec.begin(),vec.end(),comp);
	    for(auto n : vec)
	        cout<<n<<" ";
	    cout<<endl;
	}
	return 0;
}