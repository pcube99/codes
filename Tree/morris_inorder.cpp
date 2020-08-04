/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* a;
BSTIterator::BSTIterator(TreeNode *root) {
    a=root;
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(a==NULL)
        return false;
    return true;
}

/** @return the next smallest number */
int BSTIterator::next() {
    int ans;
    TreeNode* temp;
    while(a){
        if(a->left == NULL){
            ans=a->val;
            a=a->right;
            break;
        }
        else{
            temp=a->left;
            while(temp->right != NULL && temp->right != a)
                temp=temp->right;
            if(temp->right == NULL){
                temp->right=a;
                a=a->left;
            }
            else{
                ans=a->val;
                temp->right=NULL;
                a=a->right;
                break;
            }
        }
    }
    return ans;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
