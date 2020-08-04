vector<int> Solution::sieve(int a) {
    vector<int> ans;
    vector<int> prime(a+1, 1);
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i<=sqrt(a);i++) {
        if(prime[i] == 1) {
            for(int j = 2*i; j <= a ; j+=i)
                prime[j] = 0;
        }
    }
    for(int i=0;i<a;i++) {
        if(prime[i])
            ans.push_back(i);
    }
    return ans;
}
