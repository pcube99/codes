
int Solution::gcd(int a, int b) {
    int n = min(a,b);
    int m = max(a,b);
    if(n == 0 )
        return m;
    for(int i = n ; i > 0 ; i-- ) {
        float x = float(n)/i;
        if(x == (int)x) {
            float y = float(m)/i;
            if(y == (int)y) {
                return i;
            }
            
        }
    }
}

