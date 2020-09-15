// https://www.interviewbit.com/problems/amazing-subarrays/

int Solution::solve(string s) {
    long long count = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                count += s.size()-i;
            }
    }
    return count%10003;
}
