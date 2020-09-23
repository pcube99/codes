// https://www.interviewbit.com/problems/cousins-in-binary-tree/

vector<int> Solution::solve(TreeNode *A, int B)
{
    queue<TreeNode *> q;
    q.push(A);
    vector<int> ans;
    bool e = 0;
    if (A->val == B)
        return ans;
    while (!q.empty())
    {
        int n = q.size();
        if (e)
        {
            while (n--)
            {
                ans.push_back(q.front()->val);
                q.pop();
            }
            return ans;
        }
        while (n > 0)
        {
            TreeNode *cur = q.front();
            q.pop();
            if ((cur->left != NULL && cur->left->val == B) || (cur->right != NULL && cur->right->val == B))
            {
                e = 1;
                n--;
                continue;
            }
            if (cur->left != NULL)
                q.push(cur->left);
            if (cur->right != NULL)
                q.push(cur->right);
            n--;
        }
    }
    return ans;
}