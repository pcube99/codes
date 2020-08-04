//https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1
Node* rotate(Node* head, int k) {
    Node* current=head,*newhead=head,*prev=NULL;
    Node* end=head;
    if(head==NULL || head->next==NULL)
        return head;
    int count=1;
    while(1){
        if(count == k)
            break;
        current=current->next;
        count++;
    }
    while(end->next!=NULL){
        end=end->next;
    }
    end->next=head;
    head=current->next;
    current->next=NULL;

    // prev->next=NULL;
    
    return head;
}
