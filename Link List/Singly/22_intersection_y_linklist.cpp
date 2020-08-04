//https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/
int intersectPoint(Node* head1, Node* head2)
{
    Node* t1=head1;
    while(t1){
        t1->data*=-1;
        t1=t1->next;
    }
    t1=head2;
    while(t1 != NULL){
        if(t1->data < 0)
            return -1*t1->data;
        t1=t1->next;
    }
    return 0;
    
}