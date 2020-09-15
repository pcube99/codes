// https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/

// solution 1
void sumRoot(TreeNode* a, vector<int> &s,vector<vector<int> > &ans ) {
    if(a == NULL) {
        return;
    }
    s.push_back(a->val);
    if(a -> left == NULL && a -> right == NULL) {
        ans.push_back(s);
    }
    sumRoot(a->left,s,ans);
    sumRoot(a->right,s,ans);
    s.pop_back();
}
long long decimal(vector<int> a) {
    int n = a.size(), i=0;
    long long ans = 0;
    while(n--) {
        ans = ((ans*10)+a[i])%1003;
        i++;
    }
    return ans;
}
int Solution::sumNumbers(TreeNode* a) {
    int sum = 0;
    vector<int> s;
    vector<vector<int> > ans;
    int an = 0;
    sumRoot(a,s,ans);
    for(auto i : ans) {
        an += (decimal(i));
    }
    
    return an%1003;
}

// solution 2
void summ(vector<vector<long long int> > &ans, TreeNode* a, vector<long long int> v){
    if(a==NULL)
        return;
    v.push_back(a->val);
    summ(ans,a->left,v);
    summ(ans,a->right,v);
    if(a->left == NULL && a->right==NULL){
        ans.push_back(v);
    }
    
}
long long int decimal(vector<long long int> v){
    long long int ans=0;
    int n=v.size();
    int i=0;
    while(n--){
        ans = ((ans*10)+v[i])%1003;
        i++;
    }
    return ans;
}
int Solution::sumNumbers(TreeNode* A) {
    vector<long long int> v;
    vector<vector<long long int> > ans;
    summ(ans,A,v);
    long long int an=0;
    for(auto i : ans){
        // for(auto j : i)
        // cout << j << endl;
        an= (an+decimal(i))%1003;
    }
    return an;
}
