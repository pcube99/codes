// min depth of tree
int Solution::minDepth(TreeNode* a) {
    if(a==NULL)
        return 0;
    if(a->left == NULL && a->right ==NULL)
        return 1;
    int left = a->left != NULL ? minDepth(a->left) : INT_MAX;
    int right =  a->right != NULL ? minDepth(a->right) : INT_MAX;
    return min(left,right)+1;
}