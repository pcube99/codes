//https://www.interviewbit.com/problems/reorder-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* head) {
    if(head==NULL || head->next==NULL)  
        return head;
    ListNode* slow=head,*fast=head,*gg=head;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* mid=slow,*prev=NULL,*temp,*temp2=slow;
    while(slow != NULL){
        temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
    }
    ListNode* head1=prev,*pp,*ppp;
    mid->next=NULL;
    temp2->next=NULL;
    while(gg->next!=NULL && head1->next!=NULL){
        pp=gg->next;
        ppp=head1->next;
        gg->next=head1;
        head1->next=pp;
        gg=pp;
        head1=ppp;
    }
    return head;
}
