// https://www.interviewbit.com/problems/vertical-order-traversal-of-binary-tree/

// output in level order
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* a) {
    map<int,vector<int>> m;
    queue<pair<int,TreeNode *>>q;
    if(!a) return {};
    q.emplace(0,a);
    while(!q.empty())
    {
        auto[dist,temp]=q.front();
        q.pop();
        m[dist].push_back(temp->val);
        if(temp->left) q.emplace(dist-1,temp->left);
        if(temp->right) q.emplace(dist+1,temp->right);
    }
    vector<vector<int>> vec;
    for(auto &i : m) vec.push_back(i.second);
    return vec;
}

// output in preorder
void mpp(map<int,vector<int>> &mp, Node* a,int level){
    if(a==NULL)
        return;
    mp[level].push_back(a->data);
    if(a->left)
        mpp(mp,a->left,level-1);
    if(a->right)
        mpp(mp,a->right,level+1);
}
void verticalOrder(Node *a){
    map<int, vector<int> > mp;
    mpp(mp,a,0);
    bool flag=true;
    map<int, vector<int>>::iterator it=mp.begin();
    for(int i=0;i<mp.size();i++){
        sort(mp[it->first].begin(), mp[it->first].end());
            for(int j=0;j<mp[it->first].size();j++)
                cout << mp[it->first][j] << " ";
        it++;
    }
}
