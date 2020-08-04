//https://www.geeksforgeeks.org/find-length-of-loop-in-linked-list/
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