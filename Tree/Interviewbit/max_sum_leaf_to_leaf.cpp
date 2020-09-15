// https://practice.geeksforgeeks.org/problems/maximum-path-sum/1

int find(Node* root, int &ans) {
    if(root == NULL) {
        return 0;
    }
    int left = find(root->left, ans);
    int right = find(root->right, ans);
    if(root->left && root->right) {
        ans = max(ans, left+right+root->data);
        return max(left, right)+root->data;
    }
    return root->left ? left+root->data : right+root->data;
}
int maxPathSum(Node* root) {
    int ans = INT_MIN;
    find(root,ans);
    return ans;
    
}