// https://www.interviewbit.com/problems/highest-product/

int Solution::maxp3(vector<int> &a) {
    sort(a.begin(), a.end());
    int n = a.size();
    if(n < 3) {
        return 0;
    }
    return max(a[0]*a[1]*a[n-1], a[n-1]* a[n-2]*a[n-3]);
}
