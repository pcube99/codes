// https://www.interviewbit.com/problems/allocate-books/
// same as
// https://www.interviewbit.com/problems/painters-partition-problem/

bool isvalid(vector<int> &a, int b, int mid) {
    int count = 1,sum=0;
    for(int i=0;i<a.size();i++) {
        sum += a[i];
        if(sum > mid) {
            count++;
            sum = a[i];
        }
    }
    if(count <= b) {
        return true;
    }
    return false;
}
int Solution::books(vector<int> &a, int b) {
    if(b>a.size())
        return -1;
    int start=INT_MIN,end=0,mid,sum,ans=-1;
    for(int i=0;i<a.size();i++) {
        start = max(start, a[i]);
        end += a[i];
    }
    while(start <= end ) {
        mid = (start + end)/2;
        if(isvalid(a,b,mid)) {
            end = mid - 1;
            ans = mid;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}
