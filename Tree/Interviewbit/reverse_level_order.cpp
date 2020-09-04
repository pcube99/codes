// https://www.interviewbit.com/problems/reverse-level-order/

// approach 1
vector<int> Solution::solve(TreeNode* A) {
    vector<int> result;
    if(A==NULL)
        return result;
    queue<TreeNode*> q;
    stack<TreeNode*> s;
    q.push(A);
    while(q.size()){
        TreeNode * temp = q.front();
        s.push(temp);
        q.pop();
        if(temp->right != NULL)
            q.push(temp->right);
        if(temp->left != NULL)
            q.push(temp->left);
    }
    while(!s.empty()){
        result.push_back(s.top()->val);
        s.pop();
    }
    return result;
}

// approach 2
vector<int> Solution::solve(TreeNode* a) {
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(a);
    while(!q.empty()) {
        int n = q.size();
        vector<int> te;
        while(n--) {
            TreeNode* temp = q.front();
            q.pop();
            te.push_back(temp -> val);
            if(temp -> left)
                q.push(temp -> left);
            if(temp -> right)
                q.push(temp -> right);
        }
        if(te.size() > 0) {
            ans.insert(ans.begin(), te.begin(), te.end());
        }
    }
    
    return ans;
}
