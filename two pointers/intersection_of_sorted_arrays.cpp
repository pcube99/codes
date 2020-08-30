// https://www.interviewbit.com/problems/intersection-of-sorted-arrays/

vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    vector<int> ans;
    int i=0, j=0;
    while(i < a.size() && j < b.size()) {
        if(a[i] > b[j]) {
            j++;
        } else if(a[i] < b[j]) {
            i++;
        } else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
