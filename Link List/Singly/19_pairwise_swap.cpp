//https://www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list/
void pairWiseSwap(struct node *head){
    int temp;
    while(head!=NULL&&head->next!=NULL){
    int temp=head->data;
    head->data=head->next->data;
    head->next->data=temp;
    head=head->next->next;
    }
}