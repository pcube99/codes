// https://www.interviewbit.com/problems/inorder-traversal-of-cartesian-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* inorder(vector<int> &a, int start, int end) {
    if(start > end) {
        return NULL;
    }
    int maxi = INT_MIN, index;
    for(int i=start;i<=end;i++) {
        if(a[i] > maxi) {
            maxi = a[i];
            index = i;
        }
    }
    TreeNode* t = new TreeNode(maxi);
    t -> left = inorder(a,start, index-1);
    t -> right = inorder(a,index+1,end);
    return t;
}
TreeNode* Solution::buildTree(vector<int> &a) {
    TreeNode* head;
    head = inorder(a,0,a.size()-1);
    return head;
}