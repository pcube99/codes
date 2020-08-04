Node* addTwoLists(Node* first, Node* second) {
    Node* ans=new Node(0);
    Node* head1=ans;
    Node* i=first,*j=second;
    int carry=0;
    while(i!= NULL && j!=NULL){
        int currentSum=(carry+ (i->data) + (j->data));
        if(currentSum >= 10)
            carry=currentSum/10;
        else carry=0;
        int xx=currentSum%10;
        Node* temp=new Node(xx);
        ans->next=temp;
        ans=temp;
        i=i->next;
        j=j->next;
    }
   while(i!= NULL){
        int currentSum=(carry+ (i->data) );
        if(currentSum >= 10)
            carry=currentSum/10;
        else carry=0;
        int xx=currentSum%10;
        Node* temp=new Node(xx);
        ans->next=temp;
        ans=temp;
        i=i->next;
    }
    
     while(j!= NULL){
        int currentSum=(carry+ (j->data) );
        if(currentSum >= 10)
            carry=currentSum/10;
        else carry=0;
        int xx=currentSum%10;
        Node* temp=new Node(xx);
        ans->next=temp;
        ans=temp;
        j=j->next;
    }
    if(carry){
        Node* temp=new Node(carry);
        ans->next=temp;
        ans=temp;
    }
    return head1->next;
    
}