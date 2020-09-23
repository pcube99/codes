Node* LCA(Node *a, int n1, int n2){
    if(a==NULL)
        return NULL;
    while(a != NULL){
        if(a->data > n1 && a->data > n2)
            a=a->left;
        else if(a->data < n1 && a->data < n2)
            a=a->right;
        else if(a->data > n1 && a->data<n2)
            return a;
        else if(a->data < n1 && a->data>n2)
            return a;
        else if(a->data == n1 || a->data ==n2)
            return a;
      
    }
    return NULL;
}
