using namespace std;
//https://www.geeksforgeeks.org/split-a-circular-linked-list-into-two-halves/
void splitList(Node *head, Node **h1, Node **h2){
    Node* current=head;
    Node* fast=head,*slow=head;
    while(fast->next != head && fast->next->next != head){
        slow=slow->next;
        fast=fast->next->next;
    }
    *h2=slow->next;
    slow->next=head;
    
    *h1=head;  
    // fast->next=slow->next;
    // *h2=slow->next;
    
    if(fast->next == head){
        fast->next=*h2;
    }
    else fast->next->next=*h2;
}