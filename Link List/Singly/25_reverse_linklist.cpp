//https://www.geeksforgeeks.org/reverse-a-linked-list/
Node* reverseList(Node *head){
    Node* current=head;
    Node* prev=NULL;
    Node* nex=NULL;
    while(current){
        nex=current->next;
        current->next=prev;
        prev=current;
        current=nex;
    }
    head=prev;
    return head;
}