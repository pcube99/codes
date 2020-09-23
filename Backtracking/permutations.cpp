// https://www.interviewbit.com/problems/permutations/

// O(n*n!) Note that there are n! permutations and it requires O(n) time to print a a permutation.

void backtrack(vector<vector<int> > &ans, vector<int> a, int l, int r) {
    if(l == r) {
        ans.push_back(a);
        return;
    }
    for(int i=l;i<=r;i++) {
        swap(a[l], a[i]);
        backtrack(ans,a,l+1,r);
        swap(a[l], a[i]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &a) {
    vector<vector<int> > ans;
    vector<int> temp;
    backtrack(ans,a,0,a.size()-1);
    return ans;
}
