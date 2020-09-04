// https://www.interviewbit.com/problems/square-root-of-integer/

int Solution::sqrt(int A) {
    long long ans, start, end, mid, a;
    a = (long long) A;
    start = 0;
    end = a;
    while(start <= end) {
        mid = (start+end)/2;
        if(mid*mid == a) {
            return mid;
        } else if(mid*mid < a) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}
