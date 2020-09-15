// https://www.interviewbit.com/problems/minimum-parantheses/

int Solution::solve(string s) {
    stack<char> st;
    int ans = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        } else {
            if(!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                ans++;
            }
        }
    }
    ans += st.size();
    return ans;
}
