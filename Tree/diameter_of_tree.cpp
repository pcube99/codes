int dia(Node* a, int &ans){
    if(a==NULL)
        return 0;
    int l = dia(a->left,ans);
    int r = dia(a->right,ans);
    ans = max(ans,l+r+1);
    return max(l,r)+1;
}
int diameter(Node* node)
{
   int ans=-1;
   dia(node,ans);
   return ans;
}