
//https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

//method 1
void deleteNode(Node *node)
{
    *node=*(node->next);
    
}

// method 2
void deleteNode(Node *node)
{
    Node* temp=node->next;
    *node=*temp;
     delete(temp);
}
