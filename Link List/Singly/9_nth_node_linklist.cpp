//https://www.geeksforgeeks.org/write-a-function-to-get-nth-node-in-a-linked-list/

int GetNth(struct node* head, int index)
{
    struct node* current=head;
    int x=index;
    while(x--){
        current=current->next;
    }
    return current->data;
    
}