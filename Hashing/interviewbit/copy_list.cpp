// https://www.interviewbit.com/problems/copy-list/

// https://www.geeksforgeeks.org/clone-linked-list-next-random-pointer-o1-space/

/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* head) {
    if(!head)
        return head;
    unordered_map<RandomListNode*, RandomListNode* > mp;
    RandomListNode* curr = head;
    while(curr) {
        RandomListNode* temp = new RandomListNode(curr -> label);
        mp[curr] = temp;
        curr = curr -> next;
    }
    curr = head;
    while(curr) {
        RandomListNode* clone = mp[curr];
        clone -> next = mp[curr -> next];
        clone -> random = mp[curr -> random];
        
        curr = curr -> next;
    }
    return mp[head];
}

