// https://www.interviewbit.com/problems/merge-two-binary-tree/

TreeNode* Solution::solve(TreeNode* a, TreeNode* b) {
    if(a == NULL) {
        return b;
    }
    if(b == NULL) {
        return a;
    }
    a -> val += b -> val;
    a -> left = solve(a->left, b->left);
    a -> right = solve(a->right, b->right);
    return a;
}