// https://www.interviewbit.com/problems/diagonal-traversal/

void diagonal(map<int, vector<int>,greater<int> > &mp, int y, TreeNode* a) {
    if(a == NULL)
        return;
    mp[y].push_back(a->val);
    if(a->left)
        diagonal(mp,y-1,a->left);
    if(a->right)
        diagonal(mp,y,a->right);
}
vector<int> Solution::solve(TreeNode* a) {
    vector<int> ans;
    map<int, vector<int>, greater<int> > mp;
    diagonal(mp,0,a);
    for(auto i : mp) {
        for(auto j : i.second) {
            ans.push_back(j);
        }
    }
    return ans;
    
}