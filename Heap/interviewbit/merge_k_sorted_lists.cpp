// https://www.interviewbit.com/problems/merge-k-sorted-lists/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode* curr, *temp = NULL;
void sortLink(ListNode* a, ListNode* b) {
    if(a->val <= b->val) {
        curr = a;
        a = a -> next;
    } else {
        curr = b;
        b = b -> next;
    }
        temp = curr;

    while(a != NULL && b != NULL) {
        if(a -> val <= b -> val) {
            curr -> next = a;
            curr = a;
            a = curr -> next;
        } else {
            curr -> next = b;
            curr = b;
            b = curr -> next;
        }
    } 
    if(a != NULL) {
        curr -> next = a;
    } else if(b != NULL) {
        curr -> next = b;
    }
    curr = temp;
}
ListNode* Solution::mergeKLists(vector<ListNode*> &head) {
    curr = head[0];
    for(int i=1;i<head.size();i++) {
        sortLink(curr, head[i]);
    }
    return curr;
}
