// https://www.interviewbit.com/problems/search-in-bitonic-array/

// A Bitonic Sequence is a sequence of numbers which is first strictly 
// increasing then after a point strictly decreasing.

int Solution::solve(vector<int> &a, int b) {
    int start = 0 , end = a.size()-1;
    while(start <= end ) {
        int mid = (start+end)/2;
        if(a[mid] == b) {
            return mid;
        } else if(a[mid] >= a[mid-1]) {
            if(b < a[mid]) {
                end = mid-1;
            } else {
                start = mid+1;
            }
        } else if(a[mid] >= a[mid+1]) {
            if(b < a[mid]) {
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
    }
    return -1;
}
