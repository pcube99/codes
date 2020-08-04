//https://www.geeksforgeeks.org/find-length-of-a-linked-list-iterative-and-recursive/
int getCount(struct Node* head){
    Node* current=head;
    int c=0;
    while(current != NULL){
        c++;
        current = current->next;
    }
    return c;
}
