//https://www.interviewbit.com/problems/k-reverse-linked-list/
//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head, int k) {
    ListNode* current=head,*first=head,*prev=NULL,*f1,*temp;
    int i=0;
    while(current!=NULL){
        i++;
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
        if(i%k==0 || current==NULL){
            if(i==k)
                head=prev;
            else{
                first->next=prev;
                first=f1;
            }
            f1=current;
            prev=NULL;
        }
    }
    return head;
}
