int height(Node* a)
{
    if(a==NULL)
        return 0;
    return 1+ max(height(a->left), height(a->right));
    
}