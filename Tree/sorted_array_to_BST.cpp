/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* create(const vector<int> &a,int start, int end){
    if(start== end)
        return NULL;
    int mid=(start+end)/2;
    TreeNode* n1= new TreeNode(a[mid]);
    n1->left = create(a,start,mid);
    n1->right=create(a,mid+1,end);
    return n1;
} 
TreeNode* Solution::sortedArrayToBST(const vector<int> &a) {
    return create(a,0,a.size());
}
