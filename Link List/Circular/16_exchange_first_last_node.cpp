//https://www.geeksforgeeks.org/exchange-first-last-node-circular-linked-list/
struct Node *exchangeNodes(struct Node *head) 
{ 
    // Find pointer to previous of last node 
    struct Node *p = head; 
    while (p->next->next != head) 
       p = p->next; 
      
    /* Exchange first and last nodes using 
       head and p */
    p->next->next = head->next; 
    head->next = p->next; 
    p->next = head; 
    head = head->next; 
  
    return head; 
} 