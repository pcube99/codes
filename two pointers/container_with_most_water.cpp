// https://www.interviewbit.com/problems/container-with-most-water/

int Solution::maxArea(vector<int> &a) {
    int left,right,n=a.size();
    left = 0;
    right = n-1;
    int ans = (n-1)*min(a[left], a[right]);
    while(left < right) {
        int x = (right-left)*min(a[left], a[right]);
        ans = max(ans, x);
        if(a[left] < a[right]) {
            left++;
        } else {
            right--;
        }
    }
    return ans;
}

