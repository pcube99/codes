//https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
void removeTheLoop(Node *head){
    if(head == NULL || head->next==NULL)
        return;
    Node* fast=head,*slow=head,*prev=NULL;
    int flag=0;
    while(fast && slow && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow == fast){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return;
    Node* t=head;
    while(t != fast){
        prev=fast;
        t=t->next;
        fast=fast->next;
    }
    prev->next=NULL;

}
