// https://www.interviewbit.com/problems/counting-triangles/

int Solution::nTriang(vector<int> &a) {
    sort(a.begin(), a.end());
    long long ans = 0, left = 0, right, n = a.size();
    if(n < 3) {
        return 0;
    }
    for(int i=n-1;i>=0;i--) {
        left = 0;
        right = i-1;
        if(a[i] == 0)  
            continue;
        while(left < right) {
            if((long long)a[right]+(long long)a[left] > (long long)a[i]) {
                // cout << a[i] << " " << a[left] << " " << a[right] << endl;
                ans += (right-left)%1000000007; 
                right--;
            } else {
                left++;
            }
        }
    } 
    return ans%1000000007;
}
