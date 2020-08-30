// https://www.interviewbit.com/problems/remove-element-from-array/

int Solution::removeElement(vector<int> &a, int b) {
    int n = a.size(), i = 0, j = 0;
    while(i < n && j < n) {
        if(a[i] != b) {
            a[j] = a[i];
            j++;
        }
        i++;
    }
    return j;
}
