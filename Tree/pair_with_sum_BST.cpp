/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void summ(TreeNode* a, vector<int> &v){
    if(a==NULL)
        return;
    summ(a->left,v);
    v.push_back(a->val);
    summ(a->right,v);
}
int Solution::t2Sum(TreeNode* A, int B) {
    int ans=0;
    vector<int> v;
    summ(A,v);
    int i=0,j=v.size()-1;
    while(i!=j){
        if(v[i]+v[j] == B)
            return 1;
        else if(v[i]+v[j] > B)
            j--;
        else i++;
    }
    return 0;
}
