/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* build(vector<int> &pre, vector<int> &in, int start,int end, int &i){
    if(start > end)
        return NULL;
    TreeNode* temp = new TreeNode(pre[i]);
    int index=-1;
    for(int j=start;j<=end;j++){
        if(pre[i] == in[j]){
            index=j;
            break;
        }
    }
    i++;
    temp->left = build(pre,in,start,index-1,i);
    temp->right = build(pre,in,index+1,end,i);
    return temp;
}
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    int start=0,end=pre.size()-1,i=0;
    return build(pre,in,start,end,i);
}
