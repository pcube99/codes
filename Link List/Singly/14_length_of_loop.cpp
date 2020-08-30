//https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/

//floyd cycle detection algo
int countNodesinLoop(struct Node *head) {
    Node* fast = head;
    Node* slow = head;
    int flag=0, len = 1;
      if(head ==   NULL) 
        return 0;
    while(slow && fast && fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) {
            flag = 1;
            break;
        }
    }
    if(flag) {
        Node* current = slow;
        while(current->next != slow) {
            len++;
            current = current -> next;
        }
    } else {
        len = 0;
    }
     return len;
}

int countNodesinLoop(struct Node *head){
    Node* current=head;
    if(head == NULL)
        return 0;
    map<Node*, int> mp;
    Node* t=head;
    int c=1;
    while(t != NULL){
        if(mp[t])
            return c-mp[t];
        mp[t]=c;
        c++;
        t=t->next;
    }
    return 0;
}