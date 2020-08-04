/* The method push to push element into the queue*/
void MyQueue:: push(int x){
    QueueNode* newnode = new QueueNode(x);
    if(front == NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop(){
    if(front==NULL)
        return -1;
    int ans=front->data;
    if(front==rear)
        front=rear=NULL;
    else
    front=front->next;
    return ans;

    
}