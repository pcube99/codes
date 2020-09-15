// https://www.interviewbit.com/problems/remove-half-nodes/

TreeNode* removeHalf(TreeNode *root) {
    if(root == NULL) {
        return root;
    }
    root -> left = removeHalf(root->left);
    root -> right = removeHalf(root->right);
    if(root -> left == NULL && root -> right == NULL) {
        return root;
    }
    if(root -> right == NULL) {
        return root -> left;
    }
    if(root -> left == NULL) {
        return root -> right;
    }
    return root;
}
TreeNode* Solution::solve(TreeNode* a) {
    return removeHalf(a);
}