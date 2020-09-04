// https://www.interviewbit.com/problems/maximum-level-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* a) {
    int maxi = INT_MIN;
    TreeNode* curr = a;
    queue<TreeNode*> q;
    q.push(a);
    while(!q.empty()) {
        int sum = 0;
        int n = q.size();
        while(n--) {
            TreeNode* temp = q.front();
            q.pop();
            sum += temp -> val;
            if(temp -> left)
                q.push(temp->left);
            if(temp -> right)
                q.push(temp->right);
        }
        maxi = max(maxi, sum);
        
    }
    return maxi;
}
