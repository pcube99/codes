// https://www.interviewbit.com/problems/counting-subarrays/

int Solution::solve(vector &A, int B)
{
int count=0, curSum=0;
int i=0, j=0;
for(int j=0; j<A.size(); j++)
{
curSum += A[j];
while(curSum>=B)
curSum -= A[i++];
count += j-i+1;
}
return count;
}

// extra space
int Solution::solve(vector<int> &a, int b) {
    int ans = 0, i = 0, j = 0, n = a.size();
    vector<int> prefix(n,0);
    prefix[0] = a[0];
    for(int i=1;i<n;i++) {
        prefix[i] += prefix[i-1]+a[i];
    }
    while(i < n) {
        while(j < n && prefix[j] < prefix[i-1]+b)
            j++;
        if(j >= i){
            ans+= (j-i);
        }
        i++;
    }
    return ans;
}
