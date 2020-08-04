//https://www.geeksforgeeks.org/search-an-element-in-a-linked-list-iterative-and-recursive/
//recursive solution
bool search(struct Node* head, int x) 
{ 
    // Base case 
    if (head == NULL) 
        return false; 
      
    // If key is present in current node, return true 
    if (head->key == x) 
        return true; 
  
    // Recur for remaining list 
    return search(head->next, x); 
} 
  
//simple solution
/*
1) Initialize a node pointer, current = head.
2) Do following while current is not NULL
    a) current->key is equal to the key being searched return true.
    b) current = current->next
3) Return false 
 */