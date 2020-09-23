// https://www.interviewbit.com/problems/bulbs/

int Solution::bulbs(vector<int> &a) {
    int ans = 0;
    for(int i=0;i<a.size();i++) {
        if(a[i] == 0 && ans%2 == 0) {
            ans++;
        }
        if(a[i] == 1 && ans%2 == 1) {
            ans++;
        }
    }
    return ans;
}
