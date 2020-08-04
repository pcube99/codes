void print(Node* a, int level,int &maxi){

    if(a == NULL)
        return;
    if(level > maxi){
        cout << a->data << " ";
        maxi=level;
    }
    if(a->left)
        print(a->left,level+1,maxi);
    if(a->right)    
        print(a->right,level+1,maxi);
}
void leftView(Node *root)
{
    int maxi=-1;
    print(root,0,maxi);
    
}
