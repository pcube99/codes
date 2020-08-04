//https://www.geeksforgeeks.org/circular-linked-list-set-2-traversal/
void printList(struct Node *head)
{
    struct Node* t=head;
    while(t != NULL){
        printf("%d ",t->data);
        if(t->next == head)
            break;
        t=t->next;
    }
    
}