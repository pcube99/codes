// https://www.interviewbit.com/problems/atoi/

int Solution::atoi(const string s) {
    long long ans = 0, sign = 1, i =0;
    if(s[0] == '-') {
        sign = -1;
        i++;
    }
    if(s[0] == '+') {
        sign = 1;
        i++;
    }
    for(;i<s.size();i++) {
        if(!(s[i] >= '0' && s[i] <= '9')) {
            break;
        }
        ans = (ans*10)+s[i]-'0';
        if(ans > INT_MAX || ans < INT_MIN) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
    }
    
    return sign*ans;
}
