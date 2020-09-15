// https://www.geeksforgeeks.org/level-order-traversal-in-spiral-form/

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}
void print(Node* root, bool flag, int level) {
    if(root == NULL) {
        return;
    }
    if(level == 1) {
        cout << root->data << " ";
    } else if(level > 1 ) {
        if(flag) {
            print(root->left, flag,level-1);
            print(root->right, flag, level-1);
        } else {
            print(root->right, flag, level-1);
            print(root->left, flag,level-1);
        }
    }
}
void printSpiral(Node *root) {
    int h = height(root);
    bool flag = false;
    for(int i=1;i<=h;i++) {
        print(root, flag, i);
        flag = !flag;
    }
                                            
}
