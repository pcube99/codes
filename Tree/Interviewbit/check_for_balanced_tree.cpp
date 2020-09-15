// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1
// https://www.interviewbit.com/problems/balanced-binary-tree/
// solution 1
int height(Node* root, bool &ans) {
    if(root == NULL) {
        return 0;
    }
  
    int left = height(root->left, ans);
    int right = height(root->right, ans);
    if(abs(right-left) > 1) {
        ans = false;
    }
    return max(left,right)+1;
}
bool isBalanced(Node *root) {
    bool ans = true;
    height(root, ans);
    return ans;
}

// solution 2
int height(Node* a){
    if(a==NULL)
        return 0;
    return 1+max(height(a->left), height(a->right));
}

bool isBalanced(Node *a){
    if(a==NULL)
        return true;
    return isBalanced(a->left) && isBalanced(a->right) && abs(height(a->left)-height(a->right)) <= 1;
}