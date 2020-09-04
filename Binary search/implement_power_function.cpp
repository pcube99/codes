// https://www.interviewbit.com/problems/implement-power-function/

int Solution::pow(int X, int N, int D) {
    long long ans = 1,x,n,d;
    x = X, n = N, d = D;
    if(x == 0) {
        return 0;
    }
    while(n > 0) {
        if(n%2 != 0) {
            ans = ((ans%d)*(x%d))%d;
        }
        n /= 2;
        x = ((x%d)*(x%d) ) %d; 
    }
    
    return ans%d >= 0 ? ans%d : (ans+d)%d;    
    
}
