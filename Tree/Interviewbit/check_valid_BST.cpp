// https://practice.geeksforgeeks.org/problems/check-for-bst/1

// https://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

int validBST(Node* root, int min, int max) {
    if(root == NULL) {
        return 1;
    }
    if(root -> data > max || root -> data < min) {
        return 0;
    }
    return validBST(root->left, min, root->data-1) &
        validBST(root->right,root->data+1,max);
}
// return true if the given tree is a BST, else return falseint 
bool isBST(Node* root) {
    return validBST(root,INT_MIN, INT_MAX)&1;    
}