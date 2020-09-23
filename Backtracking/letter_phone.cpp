// https://www.interviewbit.com/problems/letter-phone/

void backtrack(vector<string> &ans, string a, string temp, int index, vector<string> num) {
    if(index == a.size()) {
        ans.push_back(temp);
        return;
    }
    string str = num[a[index]-'0'];
    for(int i=0;i<str.size();i++) {
        backtrack(ans,a,temp+str[i],index+1,num);
    }
}
vector<string> Solution::letterCombinations(string a) {
    vector<string> ans;
    string temp;
    vector<string> num = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    backtrack(ans,a,temp,0,num);
    return ans;
}
