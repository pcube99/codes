// https://www.interviewbit.com/problems/profit-maximisation/

int Solution::solve(vector<int> &a, int b) {
    int sum = 0;
    priority_queue<int> pq;
    for(int i=0;i<a.size();i++) {
        pq.push(a[i]);
    }
    for(int i=0;i<b;i++) {
        int x = pq.top();
        pq.pop();
        sum += x;
        pq.push(x-1);
    }
    return sum;
}
