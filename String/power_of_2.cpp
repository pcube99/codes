// https://www.interviewbit.com/problems/power-of-2/

int Solution::power(string s) {
    long long n = 0;
    for(int i=0;i<s.size();i++) {
        n = (n*10) + s[i]-'0';
    }
    if(n == 1) {
        return 0;
    }
    if(n&(n-1)) {
        return 0;
    }
    return 1;
}
