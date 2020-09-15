// https://www.interviewbit.com/problems/divide-integers/

int Solution::divide(int x, int y) {
    long long a = x, b = y;
    if(abs(a) > INT_MAX && b == -1){
        return INT_MAX;
    }
    long long ans = 0;
    
    if(a==0) {
        return 0;
    }
    if(b == 0) {
        return 0;
    }
    int sign = -1;
 
   
    if(a >=0 && b >= 0)
        sign = 1;
    if(a <=0 && b <= 0)
        sign = 1;
    a = abs(a);
    b = abs(b);
     if(b == 1) {
        return sign*a;
    }
    while((a-b) >= 0) {
        int x = 0;
        while((a- (b << 1 << x)) >= 0) {
            x++;
        }
        ans += (1<<x);
        a -= b << x;
    }
    if(ans >= INT_MAX){
        return INT_MAX;
    }
    return (int)sign*ans;
}
 