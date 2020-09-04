// https://www.interviewbit.com/problems/inorder-traversal/

unordered_map<TreeNode*, int> mp;

vector<int> Solution::inorderTraversal(TreeNode* a) {
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
                        ans.push_back(temp -> val);

        } else if(mp[temp] == 2) {
                        st.push(temp->right);

        } else {
            st.pop();
        }
        mp[temp]++;
    }
    return ans;
}
