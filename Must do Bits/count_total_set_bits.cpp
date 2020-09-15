// https://www.interviewbit.com/problems/count-total-set-bits/

int Solution::solve(int a) {
    long long c= 0, ans = 0, rem = 0, divi = 2, mod=1000000007;
    ans += (a/2)+(a%2);
    for(int i = 1; i <32 ;i++) {
        divi *= 2;
        ans += (a/divi)*(divi/2);
        rem = a%divi;
        ans %= mod;
        if(rem/(divi/2)) {
            ans += (rem%(divi/2)+1);
            ans %= mod;
        }
        
    }
    return (int)ans%mod;
}
