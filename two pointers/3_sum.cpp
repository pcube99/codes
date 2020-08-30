// https://www.interviewbit.com/problems/3-sum/

int Solution::threeSumClosest(vector<int> &a, int b) {
    sort(a.begin(), a.end());
    long ans = (long)b, left, right,n=a.size(),diff=INT_MAX;
    for(int i=0;i<n-2;i++) {
        left = i+1;
        right = n-1;
        while(left < right) {
            long s = a[i]+a[left]+a[right];
            if(abs(b-s) < diff) {
                diff = abs(b-s);
                ans = s;
            }
            if(s < b)
                left++;
            else right--;
        }
    } 
    return ans;
}
