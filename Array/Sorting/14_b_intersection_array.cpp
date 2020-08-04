#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int hash[99999]= {0};
int n, m;
cin>>n>>m;
int count = 0;
for(int i = 0; i < n; i++)
{
int temp;
cin>>temp;
hash[temp] = temp;
}
for(int j = 0; j < m; j++)
{
int temp;
cin>>temp;
if(hash[temp] != 0 && hash[temp] != -1)
{
count++;
hash[temp] = -1;
}
}
cout << count << endl;
}
return 0;
}