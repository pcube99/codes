// https://www.interviewbit.com/problems/painters-partition-problem/

bool painters(vector<int> &a, int nop, int mid) {
    long long sum = 0, count=1;
    for(int i=0;i<a.size();i++) {
        sum += a[i];
        if(sum > mid) {
            sum = a[i];
            count++;
        }
    }
    if(count <= nop) {
        return true;
    }
    return false;
}
int Solution::paint(int a, int b, vector<int> &c) {
    long long start,end,mid,sum=0,ans;
    start = 0;
    for(int i=0;i<c.size();i++) {
        sum += c[i];
        start = max(start,(long long) c[i]);
    }
    end = sum;
    while(start <= end) {
        mid = (start+end)/2;
        if(painters(c,a,mid)) {
            ans = mid;
            end = mid -1;
        } else {
            start = mid + 1;
        }
    }
    long long p = ans*b;
    return p%10000003;
}
