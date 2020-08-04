#include<bits/stdc++.h>
#define ll long long
using namespace std;
void swap(char *x, char *y)  
{  
    char temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  
vector<string> vv;
void perm(string s,int i)
{
    int n=s.length(),j;
    if(i==n-1)    //base case
        {
            cout<<s<<" ";
            return;
        }
    for(j=i+1;j<n;j++)
    {
     char temp=s[i+1];
     s[i+1]=s[j]; //swapping
     s[j]=temp;
    perm(s , i+1);
    }
        
} 
int main(){
ll t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    perm(s,-1);
    sort(vv.begin() ,vv.end());
    for(ll i=0;i<vv.size();i++){
        cout << vv[i] << " ";
    }
    cout << endl;
}
return 0;
}