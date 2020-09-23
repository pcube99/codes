// https://www.interviewbit.com/problems/prime-sum/

vector<bool> seive(int a) {
    vector<bool> isPrime(a+1,true);
    isPrime[0] = false;
    for(int i=2;i*i<=a;i++) {
        if(isPrime[i] == false) {
            continue;
        }
        for(int j=i*i;j<=a;j+=i) {
            isPrime[j] = false;
        }
    }
    return isPrime;
}
vector<int> Solution::primesum(int a) {
    vector<bool> prime = seive(a);
    vector<int> x;
    for(int i=2;i<=a;i++) {
        int diff = a-i;
        if(prime[diff] && prime[i]) {
            return {i,diff};
        }
    }
    return x;
}
