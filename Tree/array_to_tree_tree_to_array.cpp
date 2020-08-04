
void serialize(Node *aa,vector<int> &a){
    queue<Node*> q;
    q.push(aa);
    a.push_back(aa->data);
    while(!q.empty()){
        Node* t = q.front();
        q.pop();
        if(t->left){
            q.push(t->left);
            a.push_back(t->left->data);
        }
        else a.push_back(-1);
        if(t->right){
            q.push(t->right);
            a.push_back(t->right->data);
        }
        else a.push_back(-1);
    }
}
/*this function deserializes
 the serialized vector A*/
Node * deSerialize(vector<int> &a){
    Node* root;
    queue<Node*> q;
    if(a[0]!=-1)
        root= newNode(a[0]);
    else return NULL;
    q.push(root);
    int i=0;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(a[i+1] != -1){
            temp->left=newNode(a[i+1]);
            q.push(temp->left);
        }
        else temp->left=NULL;
        
        if(a[i+2] != -1){
            temp->right=newNode(a[i+2]);
            q.push(temp->right);
        }
        else temp->right=NULL;
        i+=2;
    }
    return root;
    
}