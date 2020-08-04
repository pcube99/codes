void MyStack ::push(int x) {
    StackNode* newnode=new StackNode(x);
    if(top==NULL){
        top=newnode;
    }
    else{
    newnode->next=top;
    top=newnode;
}
    // Your Code
}
/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(top == NULL)
        return -1;
    int ans=top->data;
    top=top->next;
    return ans;
    // Your Code
}