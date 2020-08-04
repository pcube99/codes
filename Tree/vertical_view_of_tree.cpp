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
