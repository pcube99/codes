// https://www.interviewbit.com/problems/bst-iterator/

// solution 1
stack<TreeNode *> s;
BSTIterator::BSTIterator(TreeNode *root) 
{
    while(root != NULL)
    {
        s.push(root);
        root = root->left;
    }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    return !s.empty();
}

/** @return the next smallest number */
int BSTIterator::next() 
{
    int temp = s.top()->val;
    
    TreeNode *curr = s.top()->right;
    s.pop();
    if(curr != NULL)
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
    }
    return temp;
}

// solution 2
int i,total;
vector<int> ans;
void inOrder(TreeNode* root, vector<int> &ans) {
    if(root == NULL) 
        return;
    inOrder(root->left, ans);
    ans.push_back(root->val);
    inOrder(root->right, ans);
}
BSTIterator::BSTIterator(TreeNode *root) {
    inOrder(root, ans);
    total = ans.size();
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(i < total) {
        return true;
    }
    return false;
}

/** @return the next smallest number */
int BSTIterator::next() {
    return ans[i++];
}