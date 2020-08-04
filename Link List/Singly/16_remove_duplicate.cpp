//https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/
Node *removeDuplicates(Node *head){
    Node* current=head;
    Node* t=head;
    set<int> s;
    while(current!= NULL && current->next != NULL){
        if(current->data == current->next->data){
            current->next=current->next->next;
        }
        else 
        current= current->next;
    }
    return head;
}