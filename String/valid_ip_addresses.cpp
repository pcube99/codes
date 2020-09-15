// https://www.interviewbit.com/problems/valid-ip-addresses/

void backtrack(vector<string> &ans, string s, string temp, int index, int depth) {
    if(depth > 4) {
        return;
    }
    if(depth == 4 && index == s.size()) {
        temp.erase(temp.end()-1);
        ans.push_back(temp);
        return;
    }
    for(int i=1;i<=3;i++) {
        if(s[index] == '0' && i > 1) {
            return;
        }
        if(index+i > s.size()) {
            return;
        }
        string st = s.substr(index, i);
        if(stoi(st) < 256) {
            backtrack(ans,s,temp+st+".",index+i,depth+1);
        } else {
            return;
        }
        
    }
}
vector<string> Solution::restoreIpAddresses(string s) {
    vector<string> ans;
    string temp;
    backtrack(ans,s,temp,0,0);
    return ans;
}
