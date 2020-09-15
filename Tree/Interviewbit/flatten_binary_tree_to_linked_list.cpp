// https://www.interviewbit.com/problems/flatten-binary-tree-to-linked-list/


// inplace
TreeNode Solution::flatten(TreeNode* A) {
if(A==NULL ){
return NULL;
}
TreeNode *l =flatten(A->left);
TreeNode *r =flatten(A->right);
if(l==NULL && r==NULL )
{
return A;
}
if(l==NULL && r!=NULL){
// A->right=r;
return A;
}
if(l!=NULL && r==NULL){
A->right=l;
A->left=NULL;
return A;
}

TreeNode *t =l;
A->right= l;
while(t->right!=NULL){
t=t->right;
}
t->right =r;
A->left=NULL;
return A;

}
// using stack
TreeNode* Solution::flatten(TreeNode* root) {
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()) {
        TreeNode *temp = st.top();
        st.pop();
        if(temp -> right) {
            st.push(temp -> right);
        }
        if(temp -> left) {
            st.push(temp->left);
        }
        
        if(!st.empty()) {
            temp -> right = st.top();
            temp -> left = NULL;
        }
    }
    return root;
    
}