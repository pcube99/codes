//https://ide.geeksforgeeks.org/teryjjh0tc
Node* head=NULL;
Node* current=NULL;
void insertt(int data){
    Node* newnode= new Node();
    newnode->data=data;
    newnode->next=NULL;
    if(head == NULL){
        head=newnode;
        current=newnode;
    }
    current->next=newnode;
    current=newnode;
}

Node* merge(Node* head1, Node* head2){
    head=NULL;
    current=NULL;
    Node* i=head1,*j=head2;
    while(i!= NULL && j!= NULL){
        if(i->data < j->data){
            insertt(i->data);
            i=i->next;
        }
        else{
            insertt(j->data);
            j=j->next;
    }
    }
    while(i!=NULL){
        insertt(i->data);
        i=i->next;
    }
    while(j!=NULL){
        insertt(j->data);
        j=j->next;
    }
    return head;
}
Node * mergeKList(Node *arr[], int N){
       // Your code here
    Node* ans;
    ans=merge(arr[0],arr[1]);
    for(int i=2;i<N;i++)
    ans=merge(ans, arr[i]);
return ans;
}
