// https://www.interviewbit.com/problems/diffk/

int Solution::diffPossible(vector<int> &a, int k) {
    if(a.size() == 1) {
        return 0;
    }
    int n = a.size(), left =0, right;
    right = 0;
    while(left < n && right < n) {
        if(left == right)
            right++;
        if(left != right && a[left]+k < a[right])
            left++;
        else if(left != right && a[left]+k > a[right]) {
            right++;
        } else if(left != right && a[left]+k == a[right]){
            return 1;
        }
    }
    return 0;
}
