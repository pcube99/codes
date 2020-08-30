//https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

// floyd cycle detection algorithms
bool detectLoop(Node* head) {
    Node* fast = head;
    Node* slow = head;
    if(head == NULL) 
        return false;
    while(slow && fast && fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) {
            return true;
        }
    } 
    return false;
}


int detectloop(Node *head) {
    Node* t=head;
    map<Node*, int> mp;
    int c=1;
    while(t != NULL){
        if(mp[t])
            return 1;
        mp[t]=c;
        c++;
        t=t->next;
    }
    return 0;

}