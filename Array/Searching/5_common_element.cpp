//https://www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
	    ll n1,n2,n3,n;cin>>n1>>n2>>n3;
	   // n=n1+n2+n3;
	    ll a[n1],b[n2],c[n3];
	    for(ll i=0;i<n1;i++)
	    cin>>a[i];
	    for(ll i=0;i<n2;i++)
	    cin>>b[i];
	    for(ll i=0;i<n3;i++)
	    cin>>c[i];
	    unordered_map<ll,ll>m2;
	    unordered_map<ll,ll>m3;
	     for(int i=0;i<n2;i++)
	        m2[b[i]]++;
	    for(int i=0;i<n3;i++)
	        m3[c[i]]++;     
	    int f=0;
	    for(int i=0;i<n1;i++)
	    {
	        if(m2.find(a[i])!=m2.end()&&m3.find(a[i])!=m3.end()&&a[i-1]!=a[i])
	        {cout<<a[i]<<" ";f=1;
	        }
	    }
	    if(f==0)cout<<-1;
	    cout<<endl;
	}
	return 0;
}