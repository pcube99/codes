// https://www.interviewbit.com/problems/combinations/

void backtrack(vector<vector<int> > &ans, vector<int> temp, int index, int a, int k) {
    if(temp.size() > k) {
        return;
    }
    if(temp.size() == k) {
        ans.push_back(temp);
    }
    for(int i=index;i<=a;i++) {
        temp.push_back(i);
        backtrack(ans, temp, i+1, a,k);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::combine(int a, int k) {
    vector<vector<int> > ans;
    vector<int> temp;
    backtrack(ans, temp, 1,a,k);
    return ans;
}
