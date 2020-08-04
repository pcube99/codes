/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int lcaa(TreeNode* a,int n1,int n2){
    if(a==NULL){
        return 0;
    }
    if(a->val ==n1 || a->val==n2)
        return a->val;
 
    int l=lcaa(a->left,n1,n2);
    int r=lcaa(a->right,n1,n2);
    if(l!=0 && r!=0){
        return a->val;
    }
    else{
        if(l==0)
            return r;
        else return l;
    }
}
//checks lca
void contains(TreeNode*a, int n1,int &flag){
    if(a==NULL)
        return;
    if(a->val == n1){
        flag=1;
        return;
    }
    contains(a->left,n1,flag);
    contains(a->right,n1,flag);
}
int Solution::lca(TreeNode* a, int n1, int n2) {
    int flag1=0,flag2=0;
    contains(a,n1,flag1); 
    contains(a,n2,flag2);
    if(flag1==0||flag2==0 ){
        return -1;
    }
    int p= lcaa(a,n1,n2);
    return p;
}
