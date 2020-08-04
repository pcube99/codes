int countLeaves(Node* a){
    if(a==NULL)
        return 0;
    if(a->left == NULL && a->right==NULL)
        return 1;
    return countLeaves(a->left)+countLeaves(a->right);
}
