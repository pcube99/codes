//https://www.geeksforgeeks.org/reverse-a-linked-list/
struct Node* reverseList(struct Node *head) {
    Node* prev=NULL;
    Node* current = head;
    Node* currnext = NULL;
    while(current) {
        currnext = current->next;
        current->next = prev;
        prev = current;
        current = currnext;
    }
    head = prev;
    return head; 

}