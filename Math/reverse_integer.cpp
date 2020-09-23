// https://www.interviewbit.com/problems/reverse-integer/

int Solution::reverse(int a) {
    int sign = 1;
    
    if(a < 0) {
        sign = -1;
    }
    a = abs(a);
    long long ans = 0;
    while(a > 0) {
        ans = (ans*10)+a%10;
        a/=10;
    }
    if(sign*ans < INT_MIN || sign*ans > INT_MAX) {
        return 0;
    }
    return sign*ans;
}
