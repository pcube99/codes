
bool isBST(Node* root) {
    static Node* prev= NULL;
    if(root == NULL)
        return true;
    if(!isBST(root->left))
        return false;
    if(prev != NULL && prev->data >= root->data){
        prev=NULL;
        return false;
    }
    prev=root;
    return isBST(root->right);
    
}