// https://www.interviewbit.com/problems/magician-and-chocolates/

int Solution::nchoc(int times, vector<int> &b) {
    long long ans = 0, mod = 1000000007;
    priority_queue<long long> pq;
    for(int i=0;i<b.size();i++) {
        pq.push((long long) b[i]);
    }
    for(int i=0;i<times;i++) {
        long long x = pq.top();
        pq.pop();
        ans += x%mod;
        ans %= mod;
        pq.push(x/2);
    }
    return ans%mod;
}
