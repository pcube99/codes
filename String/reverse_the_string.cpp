// https://www.interviewbit.com/problems/reverse-the-string/

string Solution::solve(string s) {
    vector<string> v;
    string ans="",temp="";
    for(int i=0;i<s.size();i++) {
        if(s[i] == ' ') {
            if(temp.size() > 0 && temp != " ") {
                v.push_back(temp);
                temp = "";
            }
        } else {
            temp += s[i];
        }
    }
    if(temp.size() >0 && temp != " ") {
        v.push_back(temp);
    }
    if(v.size() == 1) {
        return v[0];
    }
    for(int i=v.size()-1;i>=1;i--) {
        ans += v[i];
        ans += " ";
    }
    ans += v[0];
    return ans;
}
