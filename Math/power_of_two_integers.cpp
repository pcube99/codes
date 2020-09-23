// https://www.interviewbit.com/problems/power-of-two-integers/

int Solution::isPower(int a) {
    if(a == 1) {
        return 1;
    }
    for(int i=2;i<=sqrt(a);i++) {
        float x = log(a)/log(i); 
        if(floor(x) == x) {
            return 1;
        }
    }
    return 0;
}
