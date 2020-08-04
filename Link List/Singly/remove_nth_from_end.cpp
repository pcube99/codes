
ListNode* Solution::removeNthFromEnd(ListNode* A, int n) {
        // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=0;
    ListNode *temp=A;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    if(n>=l){
        ListNode* x=A;
        A=A->next;
        free(x);
        return A;
    }
    temp=A;
    for(int i=0;i<l-n-1;i++){
  //  cout<<temp->val<<endl;
     temp=temp->next;
    }
    ListNode* y=temp->next;
    temp->next=y->next;
    free(y);
    return A;
}