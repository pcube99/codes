// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
// https://www.geeksforgeeks.org/bottom-view-binary-tree/

// solution 1 using level order 
struct level
{
    Node *node;
    int nol;
};
vector<int> bottomView(Node *root)
{
    map<int, int> mp;
    vector<int> an;
    queue<level> q;
    q.push(level{root, 0});
    while (!q.empty())
    {
        level xx = q.front();
        q.pop();
        mp[xx.nol] = (xx.node->data);
        if (xx.node->left != NULL)
            q.push(level{xx.node->left, xx.nol - 1});
        if (xx.node->right != NULL)
            q.push(level{xx.node->right, xx.nol + 1});
    }
    for (auto i : mp)
    {
        an.push_back(i.second);
    }
    return an;
}

void mpp(map<int, vector<int>> &mp, Node *a, int level)
{
    if (a == NULL)
        return;
    mp[level].push_back(a->data);
    if (a->left)
        mpp(mp, a->left, level - 1);
    if (a->right)
        mpp(mp, a->right, level + 1);
}

void bottomView(Node *a)
{
    map<int, vector<int>> mp;
    mpp(mp, a, 0);
    bool flag = true;
    map<int, vector<int>>::iterator it = mp.begin();
    for (int i = 0; i < mp.size(); i++)
    {
        sort(mp[it->first].begin(), mp[it->first].end());
        // for(int j=0;j<mp[it->first].size();j++)
        cout << mp[it->first][mp[it->first].size() - 1] << " ";
        it++;
    }
}
