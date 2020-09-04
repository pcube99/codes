// https://www.interviewbit.com/problems/invert-the-binary-tree/

// solution 1
void invert(TreeNode* a) {
    if(a == NULL) {
        return;
    }
    TreeNode* t = a -> left;
    a -> left = a -> right;
    a -> right = t;
    
    invert(a->left);
    invert(a->right);
}
TreeNode* Solution::invertTree(TreeNode* a) {
    TreeNode* h = a;
    invert(a);
    return h;
}

// solution 2
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
