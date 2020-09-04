// https://www.interviewbit.com/problems/k-largest-elements/

vector<int> Solution::solve(vector<int> &a, int b) {
    vector<int> ans;
    priority_queue<int> pq;
    for(int i=0;i<a.size();i++)
        pq.push(a[i]);
    for(int i=0;i<b;i++) {
        ans.push_back(pq.top());
        pq.pop();
    }  
    return ans;
}
