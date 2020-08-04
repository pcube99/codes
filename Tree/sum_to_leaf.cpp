/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
