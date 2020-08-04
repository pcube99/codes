//https://www.geeksforgeeks.org/sorted-insert-for-circular-linked-list/
void sortedInsert(Node** head, int x){
    Node* temp = (struct Node*)malloc(sizeof(Node));
    temp->data=x;
    Node* current=*head;

    if(current == NULL){
        temp->next=temp;
        *head=temp;
    }
    else if(current->data >= x){
        while(current->next != *head)
            current=current->next;
        current->next=temp;
        temp->next=*head;
        *head=temp;
    }
    else{
        while(current->next != *head && (current->next->data < x)){
                current=current->next;
        }
        // cout << current->data << endl;
        temp->next=current->next;
        current->next=temp;
    }
}