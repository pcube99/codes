
//https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

//method 1
void deleteNode(Node *node)
{
    *node=*(node->next);
    
}

// method 2
void deleteNode(Node *node)
{
    // Find next node using next pointer
    struct Node *temp  = node_ptr->next;

    // Copy data of next node to this node
    node_ptr->data  = temp->data;

    // Unlink next node
    node_ptr->next  = temp->next;

    // Delete next node
    free(temp);
}
