/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void check(TreeNode* a,TreeNode*& prev,TreeNode*& f,TreeNode*& m,TreeNode*& l){
    if(a == NULL)
        return;
    check(a->left,prev,f,m,l);
    if(prev == NULL){
        prev=a;
    } else{
        if(a->val < prev->val){
        if(f==NULL || m ==NULL){
            f=prev;
            m=a;
        }
        else{
            l=a;
        }
        }
        prev=a;
    }
    check(a->right,prev,f,m,l);
}
vector<int> Solution::recoverTree(TreeNode* A) {
    TreeNode* prev = NULL,*f = NULL,*m = NULL, *l = NULL;
    check(A,prev,f,m,l);
    vector<int> ans(2);
    if(l == NULL){
        ans[0]= min(f->val, m->val);
        ans[1]=max(f->val, m->val);
    }
    else{
        ans[0]= min(f->val, l->val);
        ans[1]=max(f->val, l->val);
    }
    return ans;
}
