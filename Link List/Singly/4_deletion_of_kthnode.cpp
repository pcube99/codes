//https://www.geeksforgeeks.org/delete-a-linked-list-node-at-a-given-position/
Node* deleteNode(Node *head,int x)
{
    Node* temp=head;
    Node* prev=NULL;
    if(x == 1){
        head=head->next;
        return head;
    }
    for(int i=1;i<x;i++){
        prev=temp;
        temp = temp->next;
        if(i+1 == x)
            prev->next = temp->next;
    }
    return head;
    
    
}
