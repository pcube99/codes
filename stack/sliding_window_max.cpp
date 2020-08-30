// https://www.interviewbit.com/problems/sliding-window-maximum/

vector<int> Solution::slidingMaximum(const vector<int> &a, int b) {
    deque<int> dq;
    vector<int> ans;
    int n = a.size();
    for(int i=0;i<b;i++) {
        while(!dq.empty() && a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(a[dq.front()]);
    for(int i=b;i<n;i++) {
        while(!dq.empty() && dq.front()<=i-b)
            dq.pop_front();
        while(!dq.empty() && a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
        ans.push_back(a[dq.front()]);
    }
    return ans;
}

