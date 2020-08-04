/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void swap(TreeNode* a){
    TreeNode* temp=a->left;
    a->left=a->right;
    a->right=temp;
}
void invert(TreeNode* a){
    if(a==NULL)
        return;
    invert(a->left);
    invert(a->right);
    swap(a);
    // TreeNode* t=a->left;
    // a->left=a->right;
    // a->right=t;
}
TreeNode* Solution::invertTree(TreeNode* a) {
    TreeNode* head=a;
    TreeNode* b=a;
    invert(a);
    return head;
}
