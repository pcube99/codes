//https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/
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