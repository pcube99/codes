// https://www.interviewbit.com/problems/rotated-sorted-array-search/

int Solution::search(const vector<int> &a, int B) {
    long long start=0, end=a.size()-1, b,ans,mid;
    b = (long long) B;
    while(start <= end) {
        mid = (start+end)/2;
        if(a[mid] == b) {
            return mid;
        } else if(a[mid] > a[start]) {
            if(a[mid] > b && a[start] <= b) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if(a[mid] < b && a[end] >= b) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
} 
