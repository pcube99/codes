//https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
Node* segregate(Node *head) {
    Node* start=new Node(0);
    Node* end=new Node(0);
    Node* mid=new Node(0);
    Node*h1,*current=head;
    Node* s=start,*m=mid,*e=end;
    while(current !=NULL){
        // cout << "curr " << (current->data) <<endl;
        if(current->data == 2){
            end->next=current;
            end=current;
            current=current->next;
        }
        else if(current->data == 1){
            mid->next=current;
            mid=current;
            current=current->next;
        }
        else if(current->data == 0){
            start->next=current;
            start=current;
            current=current->next;
        }
        // current=current->next;
    }
   start->next = (m->next) ? (m->next) : (e->next);
   mid->next= e->next;
   end->next=NULL;
   head=s->next;
    return head;
}
