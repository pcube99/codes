// https://www.interviewbit.com/problems/woodcutting-made-easy/

bool valid(vector<int> &a, int b, int mid) {
    long long sum = 0;
    for(int i=0;i<a.size();i++) {
        if(a[i] > mid) {
            sum += a[i]-mid;
        }
    }
    if(sum >= b) {
        return true;
    }
    return false;
}
int Solution::solve(vector<int> &a, int b) {
    long long ans, mini = INT_MAX, maxi = INT_MIN;
    for(int i=0;i<a.size();i++) {
        mini = min(mini,(long long)a[i]);
        maxi = max(maxi,(long long) a[i]);
    }
    long long start =mini, end = maxi;
    while(start <= end) {
        long long mid = (start+end)/2;
        if(valid(a,b,mid)) {
            start = mid+1;
            ans = max(ans, mid);
        } else {
            end = mid-1;
        }
    }
    return ans;
}
