 struct level{
     TreeNode* node;
     int nol;
 };
vector<vector<int> > Solution::levelOrder(TreeNode* a) {
    vector<vector<int> > ans;
    queue<level> q;
    q.push(level{a,0});
    while(!q.empty()){
        level xx = q.front();
        q.pop();
        if(ans.size() == xx.nol){
            ans.push_back(vector<int> ());
        }
        ans[xx.nol].push_back(xx.node->val);
        if(xx.node->left !=NULL)
            q.push(level{xx.node->left, xx.nol+1});
        if(xx.node->right != NULL)
            q.push(level{xx.node->right, xx.nol+1});
    }
    return ans;
}