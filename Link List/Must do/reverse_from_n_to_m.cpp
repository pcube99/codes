//https://www.interviewbit.com/problems/reverse-link-list-ii/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* head, int x, int y) {
    if(head==NULL || head->next == NULL)
        return head;
    ListNode* xx=head,*yy=head,*p1=head,*p2=head,*tmpo=NULL;
    int i=1;
    while(i<x){
        p1=xx;
        xx=xx->next;
        i++;
    }
    ListNode* first=xx,*prev=NULL;
    while(i<=y){
        tmpo=xx->next;
        xx->next=prev;
        prev=xx;
        xx=tmpo;
        i++;
    }
    // cout << xx->val << " " << yy->val << endl;
    // yy->next=p1;
    first->next=tmpo;
    if(x>1){
        p1->next=prev;
    return head;}
    else{
        return prev;
    }
}
