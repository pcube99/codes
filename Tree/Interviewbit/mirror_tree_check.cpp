// https://www.interviewbit.com/problems/symmetric-binary-tree/

// solution 1
void check(TreeNode* a, TreeNode* b, int &ans) {
    if(a == NULL && b != NULL) {
        ans = 0;
        return;
    }
    if(b == NULL && a != NULL) {
        ans = 0;
        return;
    }
    if(a == NULL && b == NULL) {
        return;
    }
    if(a->val != b ->val) {
        ans = 0;
        return;
    }
    check(a->left, b->right, ans);
} 
int Solution::isSymmetric(TreeNode* a) {
    TreeNode* b = a;
    int ans = 1;
    check(a,b,ans);
    return ans;
}

// solution 2
int check(Node* a,Node* b){
    if(a==NULL && b==NULL)
        return 1;
    if((a==NULL && b!= NULL) || (a!=NULL && b==NULL))
        return 0;
    if(a->key != b->key)
        return 0;
    int l = check(a->left, b->right);
    int r = check(a->right,b->left);
    return l&&r;
    
}
bool isSymmetric(struct Node* root){
    int ans=0;
    Node* b=root;
    return check(root,b);
    // return ans;
}