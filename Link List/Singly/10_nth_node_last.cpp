//https://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/
int getNthFromLast(Node *head, int n)
{
    int length=0;

    Node* current=head;
    while(current != NULL){
        length++;
        current=current->next;
    }
    if(n > length)
        return -1;
    Node* t=head;
    int x=(length-n);
    while(x--)
        t=t->next;
    return t->data;
}