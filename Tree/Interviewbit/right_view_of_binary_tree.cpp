// https://www.interviewbit.com/problems/right-view-of-binary-tree/

void rightView(int &maxi, TreeNode* a, int level, vector<int> &ans) {
    if(a == NULL)
        return;
    if(level > maxi) {
        ans.push_back(a->val);
        maxi = level;
    }
    if(a -> right)
        rightView(maxi, a->right, level+1,ans);
    if(a -> left)
        rightView(maxi, a->left, level+1, ans);
  
    
}
vector<int> Solution::solve(TreeNode* a) {
    vector<int> ans;
    int maxi = -1;
    rightView(maxi, a, 0, ans);
    return ans;
}