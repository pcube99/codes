/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void sum(vector<vector<int> > &ans, int summ, TreeNode* a,vector<int> v){
    if(a==NULL)
        return;
    v.push_back(a->val);
    sum(ans,summ-a->val,a->left,v);
    sum(ans,summ-a->val,a->right,v);
    if(summ-a->val==0 && a->left==NULL && a->right==NULL)
        ans.push_back(v);
}
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > ans;
    vector<int> v;
    sum(ans,B,A,v);
    return ans;
    
}
