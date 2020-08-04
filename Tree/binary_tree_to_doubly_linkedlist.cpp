void bToDLL(Node *root, Node **head){
    static Node* prev=NULL;
    if(root==NULL)
        return;
    bToDLL(root->left,head);
    if(*head == NULL)
        *head=root;
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    bToDLL(root->right,head);
    
}