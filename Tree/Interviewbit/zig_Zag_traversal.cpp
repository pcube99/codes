// https://www.interviewbit.com/problems/zigzag-level-order-traversal-bt/

// solution 1
void zigzag(map<int, vector<int>> &mp, TreeNode* root, int level) {
    if(root == NULL) {
        return;
    }
    zigzag(mp,root->left,level+1);
    mp[level].push_back(root->val);

    zigzag(mp,root->right,level+1);
}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* a) {
    vector<vector<int> > ans;
    map<int, vector<int>> mp;
    zigzag(mp,a,0);
    bool flag = true;
    for(auto i: mp) {
        if(flag) {
            ans.push_back(i.second);
        } else {
            reverse(i.second.begin(), i.second.end());
            ans.push_back(i.second);
        }
        flag = !flag;
    }
    return ans;
}

// solution 2
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* a) {
    vector<vector<int> > ans;
    deque<TreeNode*> q;
    bool flag=true;
    int levelcount=1,next=0;
    q.push_front(a);
    while(!q.empty()){
        vector<int> temp;
        if(flag){
        while(levelcount!=0){
            TreeNode* fro=q.front();
            q.pop_front();
            temp.push_back(fro->val);
            if(fro->left!=NULL){
                q.push_back(fro->left);
                next++;
            }
            if(fro->right!=NULL){
                q.push_back(fro->right);
                next++;
            }
            levelcount--;
        }
        }
        else{
        while(levelcount!=0){
        TreeNode* bac=q.back();
        q.pop_back();
        temp.push_back(bac->val);
        if(bac->right!=NULL){
            q.push_front(bac->right);
            next++;
        }
        if(bac->left!=NULL){
            q.push_front(bac->left);
            next++;
        }
        
        levelcount--;
        }
            
        }
        ans.push_back(temp);
        levelcount=next;
        flag=!flag;
        next=0;
    }
    return ans;
}
