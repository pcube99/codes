// https://www.interviewbit.com/problems/postorder-traversal/

//iterative
unordered_map<TreeNode*, int> mp;
vector<int> Solution::postorderTraversal(TreeNode* a) {
    stack<TreeNode*> st;
    vector<int> ans;
    st.push(a);
    while(!st.empty()) {
        TreeNode* temp = st.top();
        if(temp == NULL) {
            st.pop();
            continue;
        }
        if(mp[temp] == 0) {
            st.push(temp->left);
        } else if(mp[temp] == 1) {
            st.push(temp->right);
        } else if(mp[temp] == 2) {
            ans.push_back(temp -> val);
        } else {
            st.pop();
        }
        mp[temp]++;
    }
    return ans;
}

//recursive
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postOrder(TreeNode *a, vector<int> &ans) {
    if(a == NULL)
        return;
    postOrder(a -> left, ans);
    postOrder(a -> right, ans);
    ans.push_back(a->val);
}
vector<int> Solution::postorderTraversal(TreeNode* a) {\
 vector<int> ans;

    postOrder(a, ans);
    return ans;
}
