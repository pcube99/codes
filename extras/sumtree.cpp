int solve(Node* root, int& ans, int& sum){
    if(root==NULL)
        return 0;
    if(root->left ==NULL && root->right==NULL){
        return root->data;
    }
    int l = solve(root->left,ans,sum);
    int r = solve(root->right,ans,sum);
    sum+=l+r;
    if(sum != root->data)
        ans=0;
    return l+r;
    
}
bool isSumTree(Node* root){
    int ans=1,sum=0;
    solve(root,ans,sum);
    return ans;
}