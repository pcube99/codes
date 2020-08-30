// https://www.interviewbit.com/problems/rain-water-trapped/

// 2- pointer
int Solution::trap(const vector &a) {
int n=a.size();

if(n<3)return 0;
int i;
int ans = 0;

vector<int> left(n), right(n);
left[0] = a[0];
for (i = 1; i < n; i++) {
    if (a[i] > left[i - 1])
        left[i] = a[i];
    else
        left[i] = left[i - 1];
}
right[n - 1] = a[n - 1];
for (i = n - 2; i >= 0; i--) {
    if (a[i] > right[i + 1])
        right[i] = a[i];
    else
        right[i] = right[i + 1];
}

for (i = 0; i < n; i++) {
    int m = min(left[i], right[i]);
    ans += m - a[i];
}
return ans;
}

// O(2*n) space
int Solution::trap(const vector<int> &a) {
    int n = a.size();
    if(n < 3) {
        return 0;
    }
    vector<int> left(n,0), right(n,0);
    left[0] = a[0];
    right[n-1] = a[n-1];
    for(int i=1;i<n;i++) {
        left[i] = max(left[i-1], a[i]);
    }
    for(int i=n-2;i>=0;i--) {
        right[i] = max(right[i+1], a[i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++) {
        int m = min(left[i], right[i]);
        ans += m - a[i];
    }
    return ans;
}
