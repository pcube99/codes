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