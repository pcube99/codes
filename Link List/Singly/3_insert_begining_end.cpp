//https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
Node *insertAtBegining(Node *head, int newData) {
    Node* temp = new Node(newData);
    temp->data=newData;
    if(head==NULL){
    head=temp;
    }
    else{
    temp->next=head;
    head = temp;
    }
    return head;
    
}
// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
    Node* temp= new Node(newData);
    temp->data=newData;
    if(head==NULL){
    head=temp;
    }
    else{
    Node* current=head;
    while(current->next != NULL)
        current=current->next;
    current->next=temp;
    temp->next=NULL;
    }
    return head;
}
