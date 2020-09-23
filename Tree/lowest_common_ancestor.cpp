// https://www.interviewbit.com/problems/least-common-ancestor/

bool contains(TreeNode* a, int n) {
    if(a == NULL) {
        return false;
    }
    if(a -> val == n) {
        return true;
    }
    return contains(a->left, n) || contains(a->right, n);
}
int findLCA(TreeNode* a, int n1, int n2) {
    if(a == NULL) {
        return 0;
    }
    if(a -> val == n1 || a -> val == n2) {
        return a -> val;
    }
    int left = findLCA(a->left, n1, n2);
    int right = findLCA(a->right, n1, n2);
    if(left && right) {
        return a->val;
    }
    if(!left ) {
        return right;
    }
    if(!right) {
        return left;
    }
}
int Solution::lca(TreeNode* a, int n1, int n2) {
    bool flag1, flag2;
    flag1 = contains(a,n1);
    flag2 = contains(a,n2);
    if(!flag1 || !flag2 ) {
        return -1;
    }
    return findLCA(a,n1,n2);
}
