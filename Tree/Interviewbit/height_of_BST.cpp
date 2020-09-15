// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

// solution 1
int height(Node* a) {
    if(a==NULL)
        return 0;
    return 1+ max(height(a->left), height(a->right));
    
}

// solution 2
void h(Node* a, int &maxi, int c) {
    if(a == NULL)
        return;
    if(a -> left == NULL && a->right == NULL) {
        maxi = max(maxi, c);
    }
    c++;
    h(a->left,maxi,c);
    h(a->right, maxi, c);
    c--;
}
int height(Node* root) {
   int maxi = INT_MIN;
   h(root,maxi,1);
   return maxi;
}
