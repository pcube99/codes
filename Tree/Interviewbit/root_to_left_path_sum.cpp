// https://www.interviewbit.com/problems/path-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void su(int &flag,int sum, TreeNode* a){
    if(a == NULL)
        return;
    su(flag,sum-a->val,a->left);
    su(flag,sum-a->val,a->right);
    if(sum-a->val == 0 && a->left==NULL && a->right==NULL){
        flag=1;
    }
}
int Solution::hasPathSum(TreeNode* A, int B) {
    int flag=0;
    vector<int> v;
    su(flag,B,A);
    return flag;
}
