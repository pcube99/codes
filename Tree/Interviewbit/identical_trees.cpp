// https://www.interviewbit.com/problems/identical-binary-trees/
// https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
// solution 1
int Solution::isSameTree(TreeNode* a, TreeNode* b) {
    if(a == NULL && b != NULL) {
        return 0;
    }
    if(b == NULL && a != NULL) {
        return 0;
    }
    if(a == NULL && b == NULL) {
        return 1;
    }
    if(a->val != b ->val) {
        return 0;
    }
    int l = isSameTree(a->left, b->left);
    int r = isSameTree(a->right, b->right);
    return l&r;
}

// solution 2
bool isIdentical(Node *r1, Node *r2){
    if(r1== NULL && r2==NULL)
        return true;
    if(r1==NULL || r2==NULL)
        return false;
    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
}