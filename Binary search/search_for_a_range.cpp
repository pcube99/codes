// https://www.interviewbit.com/problems/search-for-a-range/

// true log n
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size(),low=0,high=n-1,mid;
    vector<int> a(2,-1);
    while(low<high){
        mid=(low+high)/2;
        if(A[mid]<B)
            low=mid+1;
        else
            high=mid;
    }
    if(A[low]!=B)
        return a;
    else
        a[0]=low;
    high=n-1;
    
    while(low<high){
        mid=(low+high)/2 + 1;
        if(A[mid]>B)
            high=mid-1;
        else
            low=mid;
    }
    a[1]=high;
    return a;
}

// not log n
vector<int> Solution::searchRange(const vector<int> &a, int b) {    
    int mid, start = 0, end = a.size() - 1;
    vector<int> ans;
    while(start <= end) {
        mid = (start+end)/2;
        if(a[mid] == b) {
           while(mid-1 >= start && a[mid-1] == b) {
               mid--;
           }
           ans.push_back(mid);
           while(mid+1 <= end && a[mid+1] == b) {
               mid++;
           }
           ans.push_back(mid);
           return ans;
        } else if(a[mid] < b) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return {-1,-1};
}
