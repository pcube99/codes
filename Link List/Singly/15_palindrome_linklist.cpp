//https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/
bool isPalindrome(Node *head){
    Node* current=head;
    int l=1;
    stack<Node*> s;
    while(current){
        s.push(current);
        current=current->next;
    }
    while(head != NULL){
        if(head->data != s.top()->data){
            return 0;
        }
        s.pop();
        head=head->next;
    }
    
    return 1;
}