// https://www.interviewbit.com/problems/valid-bst-from-preorder/

// In pre-order traversal we can visualize that if we encounter greater number than
// root node (or current node) then all number after that encountered greater number
// should be greater than root node(or current node),if it happens then return (1)
// otherwise return (0)

// https://www.geeksforgeeks.org/check-if-a-given-array-can-represent-preorder-traversal-of-binary-search-tree/

int Solution::solve(vector<int> &a) {
    stack<int> st;
    int root = INT_MIN;
    if(a.size() < 1) 
        return 1;
    for(int i=0;i<a.size();i++) {
        if(a[i] < root) {
            return 0;
        }
        while(!st.empty() && st.top() < a[i]) {
            root = st.top();
            st.pop();
        }
        st.push(a[i]);
    }
    return 1;
}
