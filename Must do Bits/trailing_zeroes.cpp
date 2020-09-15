// https://www.interviewbit.com/problems/trailing-zeroes/

int Solution::solve(int a) {
    int c = 0, mask=1;
    while(a) {
        // cout << (a & mask) << endl;
        if((a&mask) == 0)
            c++;
        else 
            return c;
        a = a >> 1;
    }
}
