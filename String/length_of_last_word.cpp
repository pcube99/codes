// https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string s) {
    int count = 0;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i] != ' ') {
            count++;
        }
        if(count > 0 && s[i] == ' ') {
            break;
        }
    }
    return count;
}

