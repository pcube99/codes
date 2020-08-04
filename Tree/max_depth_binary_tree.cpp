int Solution::maxDepth(TreeNode* a) {
    if(a==NULL)
        return 0;
    if(a->left == NULL  && a->right==NULL)
        return 1;
    int left= a->left != NULL ? maxDepth(a->left) : INT_MIN;
    int right =a->right!=NULL ? maxDepth(a->right) : INT_MIN;
    return max(left,right)+1;
}