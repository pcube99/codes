//https://www.geeksforgeeks.org/intersection-of-two-sorted-linked-lists/
void intersection(Node **head1, Node **head2,Node **head3){
    Node* h1=*head1;
    Node* h2=*head2;
    while(h1!= NULL && h2!= NULL){
        if(h1->val > h2->val){
            h2=h2->next;
        }
        else if(h2->val > h1->val){
            h1=h1->next;
        }
        else{
            push(head3,h1->val);
            h1=h1->next;
            h2=h2->next;
        }
    }
    
}