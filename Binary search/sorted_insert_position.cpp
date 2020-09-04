// https://www.interviewbit.com/problems/sorted-insert-position/

int Solution::searchInsert(vector<int> &a, int b) {
    int n = a.size(), start = 0, end = n-1, ans;
    while(start <= end) {
        int mid = (start+end)/2;
        if(a[mid] == b) {
            return mid;
        } else if(a[mid] < b) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if(a[start] < b) {
        return start+1;
    }
    return start;
}
