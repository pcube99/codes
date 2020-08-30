// https://www.interviewbit.com/problems/simplify-directory-path/

string Solution::simplifyPath(string s) {
    int n = s.size(), i = 1;
    string ans = "";
    stack<string> st;
    while(i<n) {
        string s1 = "";
        if(s[i] == '/') {
            i++;
            continue;
        } else {
            while(s[i] != '/' && i < n) {
                s1 += s[i];
                i++;
            }
            if(s1 == ".") {
                continue;
            } else if(s1 == "..") {
                if(!st.empty())
                st.pop();
            } else {
                st.push(s1);
            }
        }
    }
    if(st.empty()) {
        return "/";
    }
    while(!st.empty() ) {
        string s11 = "";
        s11 = st.top();
        // cout << st.top() << " ";
        reverse(s11.begin(), s11.end());
        ans += s11;
        ans += "/";
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
