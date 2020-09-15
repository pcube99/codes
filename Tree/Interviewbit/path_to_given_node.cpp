// https://www.interviewbit.com/problems/path-to-given-node/

bool findPath(TreeNode* root, vector<int> &path, int b) {
    if(root == NULL)
        return false;
    path.push_back(root->val);

    if(root->val == b) {
        return true;
    }
    if(findPath(root->left, path,b) || findPath(root->right, path,b)) {
        return true;
    }
    path.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* a, int b) {
    vector<int> path;
    findPath(a,path,b);
    return path;
}