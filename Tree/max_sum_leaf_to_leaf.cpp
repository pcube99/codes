int summ(Node* a, int &ans){
    if(a==NULL)
        return 0;
    int l = summ(a->left,ans);
    int r = summ(a->right,ans);
    ans = max(ans, l+r+a->data);    
    return max(l,r)+a->data;
}
int maxPathSum(struct Node *root){
    int ans;
    summ(root,ans);
    return ans;
}
