// https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1

// solution 1
int countLeaves(Node* root) {
    if(root == NULL) {
        return 0;
    }
    if(root -> left == NULL && root -> right == NULL) {
        return 1;
    }
    int left = countLeaves(root->left);
    int right = countLeaves(root->right);
    return left+right;
    
}

// solution 2
int countLeaves(Node* a){
    if(a==NULL)
        return 0;
    if(a->left == NULL && a->right==NULL)
        return 1;
    return countLeaves(a->left)+countLeaves(a->right);
}
