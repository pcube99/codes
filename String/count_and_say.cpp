// https://www.interviewbit.com/problems/count-and-say/

string Solution::countAndSay(int n) {
    string s = "1", temp = "";
    int count = 0;
    while(n-- > 1) {
        char ch = s[0];
        for(int i=0;i<s.size();i++) {
            if(s[i] == ch) {
                count++;
            } else {
                temp += (count+'0');
                temp += ch;
                count = 1;
                ch = s[i];
            }
        }
        temp += (count+'0');
        temp += ch;
        s = temp;
        temp.clear();
        count = 0;
    }
    return s;
}
