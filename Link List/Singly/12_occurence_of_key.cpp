//https://www.geeksforgeeks.org/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/
int count(struct node* head, int n){
    struct node* current=head;
    map<int, int> mp;
    while(current){
        if(mp.find(current->data) == mp.end())
            mp[current->data]=1;
        else mp[current->data]++;
        current = current->next;
    }
    return mp[n];
    
}