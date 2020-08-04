/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
