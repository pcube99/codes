//https://www.geeksforgeeks.org/check-if-a-linked-list-is-circular-linked-list/
bool isCircular(Node *head){
    Node* t=head;
    while(1){
        if(t->next == NULL)
            return 0;
        if(t->next== head)
            return 1;
        t=t->next;
    }
}