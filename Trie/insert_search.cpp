#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(a) cout << #a << ": " << (a) << endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio (false); cin.tie (NULL); cout.tie(NULL);
struct Trienode {
        Trienode* child[26];
        bool end;
};

struct Trienode* createnode(){
    Trienode* ans= new Trienode();
    ans->end=false;
    for(int i=0;i<26;i++)
        ans->child[i] = NULL;
    return ans;
}
void insert(Trienode* root, string s){
    Trienode* curr=root;
    for(int i=0;i<s.size();i++){
        int ii=s[i]-'a';
        if(curr->child[ii] == NULL)
            curr->child[ii] = createnode();
        
        curr=curr->child[ii];
    }
    curr->end=true;
}
bool search(Trienode* root, string s){
    Trienode* a=root;
    for(int i=0;i<s.size();i++){
        int ii=s[i]-'a';
        if(a->child[ii] == NULL)
            return false;
        a=a->child[ii];
    }
    return (a!=NULL && a->end);
}
int main() {
    fastio;
    
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    vector<string> a(n);
    Trienode* root=createnode();
    for(ll i=0;i<n;i++){
        cin >> a[i];
        insert(root, a[i]);
    }
    string ss;
    cin >> ss;
    cout << search(root, ss) << endl;
    
    
    }
    return 0;
}