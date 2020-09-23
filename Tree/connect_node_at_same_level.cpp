// https://www.interviewbit.com/problems/populate-next-right-pointers-tree/

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* a) {
    if(a == NULL) {
        return;
    }
    queue<TreeLinkNode*> q;
    q.push(a);
    while(!q.empty()) {
        int n = q.size();
        TreeLinkNode* prev = NULL;
        while(n--) {
            TreeLinkNode* temp = q.front();
            q.pop();
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
            if(prev != NULL) {
                prev -> next = temp;
            }
            prev = temp;
        }
    }
}
