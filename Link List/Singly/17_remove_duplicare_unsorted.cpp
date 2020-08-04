//https://www.geeksforgeeks.org/remove-duplicates-from-an-unsorted-linked-list/
Node *removeDuplicates(Node *head)
{
    set<int> mp;
    Node* current=head;
    Node* prev=NULL;
    if(head == NULL)
        return head;
    mp.insert(current->data);
    while(current->next != NULL){
        if(mp.find(current->next->data) != mp.end()){
            // prev->next=current->next;
            // // free(current);
            // prev=current;
            current->next=current->next->next;
        }
        else{
        mp.insert(current->next->data);
        current=current->next;
        // prev=current;
        }
    }
    return head;
}