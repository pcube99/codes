// https://www.interviewbit.com/problems/pretty-json/

vector<string> Solution::prettyJSON(string s) {
    vector<string> ans;
int tabs=0;
string temp="";

for(int i=0;i<s.length();i++) {
    if(s[i]==' ') {
        continue;
    } else if(s[i]=='{' || s[i]=='[') {
        if(temp != "") {
            ans.push_back(temp);
        }
        temp="";
        for(int k=0;k<tabs;k++)
            temp+="\t";
        temp += s[i];
        ans.push_back(temp);
        temp = "";
        tabs++;
    } else if(s[i]=='}' || s[i]==']') {
        if(temp!="") {
            ans.push_back(temp);
        }
        temp = "";
        for(int k=0;k<tabs-1;k++)
            temp+="\t";
        temp+=s[i];
        if(i<s.length() && s[i+1]==',')
            temp+=s[++i];
        ans.push_back(temp);
        temp = "";
        tabs--;
    } else {
        if(temp=="") {
            for(int k=0;k<tabs;k++)
                temp += "\t";
        }
        temp+=s[i];
        if(s[i]==',') {
            ans.push_back(temp);
            temp = "";
        }
    }
}
return ans;
}


