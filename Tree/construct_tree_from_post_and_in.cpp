// https://www.interviewbit.com/problems/binary-tree-from-inorder-and-postorder/

TreeNode* build(vector<int> &in, vector<int> &post, int start,int end, int &index){
    if(start > end)
        return NULL;
    TreeNode* temp= new TreeNode(post[index]);
    int pp=post[index];
        --index;

    if(start == end)
        return temp;
    int ind =-1;
    for(int j=start;j<=end;j++){
        if(in[j] == pp){
            ind=j;
            break;
        }
    }
    temp->right = build(in,post,ind+1,end,index);
    temp->left = build(in,post,start,ind-1,index);
    return temp;
    
}
TreeNode* Solution::buildTree(vector<int> &in, vector<int> &post) {
    int start=0,end,index=post.size()-1;
    return build(in,post,0,in.size()-1,index);
}
