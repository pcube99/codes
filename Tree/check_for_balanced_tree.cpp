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