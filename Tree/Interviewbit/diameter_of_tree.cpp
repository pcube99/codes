// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

// In this post a new simple O(n) method is discussed. Diameter of a tree can be
// calculated by only using the height function, because the diameter of a tree is nothing 
// but maximum value of (left_height + right_height + 1) for each node.
// So we need to calculate this value (left_height + right_height + 1) 
// for each node and update the result. Time complexity – O(n)
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