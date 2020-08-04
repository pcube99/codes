/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* head) {
    if(head == NULL)
        return 0;
    if(head->next == NULL){
        return 1;
    }
    ListNode* current=head,*prev=current;
    ListNode* fast=head,*slow=head;
    int l=1;
    while(fast->next != NULL && fast->next->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
        l+=2;
    }
    if(fast->next != NULL){
        l++;
        fast=fast->next;
    }
    ListNode* reverse=slow->next;
    ListNode* itr=reverse;
    ListNode* i=reverse;
    itr=itr->next;
    reverse->next=NULL;
    while(itr != NULL){
        ListNode* temp1=itr->next;
        itr->next=reverse;
        reverse=itr;
        itr=temp1;
    }
    itr=reverse;
    slow->next=NULL;
    i->next=NULL;
    ListNode* main=head;
    while(itr != NULL && main!= NULL ){
        if(itr->val != main->val)   
            return 0;
        main=main->next;
        itr=itr->next;
    }
    return 1;

}
