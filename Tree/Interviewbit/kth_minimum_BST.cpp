// https://www.interviewbit.com/problems/kth-smallest-element-in-tree/

// solution 1
void find(TreeNode* root, int &n, int &ans) {
    if(root == NULL) {
        return;
    }
    find(root->left, n,ans);
    n--;
    if(n == 0) {
        ans = root -> val;
    }
    find(root->right, n, ans);
}
int Solution::kthsmallest(TreeNode* a, int n) {
    int ans;
    find(a,n,ans);
    return ans;
}

// solution 2
void inorder(TreeNode* a, int &num, int &curr, int &ans){
    if(a==NULL)
        return;
    inorder(a->left,num,curr,ans);
    curr++;
    if(curr==num){
        ans=a->val;
        return;
    }
    inorder(a->right,num,curr,ans);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int ans=0;
    int curr=0;
    inorder(A,B,curr,ans);
    
    return ans;
}
