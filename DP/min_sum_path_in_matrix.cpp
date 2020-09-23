// https://www.interviewbit.com/problems/min-sum-path-in-matrix/

int Solution::minPathSum(vector<vector<int> > &a) {
    int n = a.size();
    int m = a[0].size();
    int dp[n][m];
    dp[n-1][m-1] = a[n-1][m-1];
    for(int i=n-2;i>=0;i--) {
        dp[i][m-1] = dp[i+1][m-1] + a[i][m-1];
    }
    for(int i=m-2;i>=0;i--) {
        dp[n-1][i] = dp[n-1][i+1] + a[n-1][i];
    }
    for(int i=n-2;i>=0;i--) {
        for(int j=m-2;j>=0;j--) {
            dp[i][j] = a[i][j] + min(dp[i+1][j], dp[i][j+1]);
        }
    }
    return dp[0][0];
    
}
