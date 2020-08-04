/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* a, int &num, int &curr, int &ans){
    if(a==NULL)
        return;
    inorder(a->left,num,curr,ans);
    curr++;
    if(curr==num){
        ans=a->val;
        return;
    }
    inorder(a->right,num,curr,ans);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int ans=0;
    int curr=0;
    inorder(A,B,curr,ans);
    
    return ans;
}
