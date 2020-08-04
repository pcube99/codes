//https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/
int getMiddle(Node *head){
    Node* current=head;
    int length=0;
    if(head == NULL)
        return -1;
    while(current != NULL){
        length++;
        current = current->next;
    }
    length/=2;
    Node* t=head;
    while(length--){
        t=t->next;
    }
    return t->data;

    
}