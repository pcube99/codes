// https://www.interviewbit.com/problems/evaluate-expression/

int Solution::evalRPN(vector<string> &a) {
    stack<int> st;
    for(int i=0;i<a.size();i++) {
        if(a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/") {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            if(a[i] == "+") {
                st.push(x+y);
            } else if(a[i] == "-") {
                st.push(y-x);
            } else if(a[i] == "*") {
                st.push(x*y);
            } else {
                st.push(y/x);
            }
        } else {
            st.push(stoi(a[i]));
        }
    }
    return st.top();
}
