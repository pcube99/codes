// https://www.interviewbit.com/problems/root-to-leaf-paths-with-sum/

void rootToLeaf(TreeNode* a, int sum, vector<vector<int> > &ans, vector<int> &temp) {
    if(a == NULL)
        return;
        
    temp.push_back(a->val);
    if(sum-a->val == 0 && a->left == NULL && a->right == NULL) {
        ans.push_back(temp);
    }
    rootToLeaf(a->left,sum-a->val,ans,temp);
    rootToLeaf(a->right,sum-a->val,ans,temp);
    temp.pop_back();
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > ans;
    vector<int> temp;
    rootToLeaf(A,B,ans,temp);
    return ans;
}