// https://www.interviewbit.com/problems/min-sum-path-in-triangle/

// n in the space complexity is actually the last row's column number

int Solution::minimumTotal(vector<vector<int> > &A) {
   
    int m=A.size();
    if(m==0){return 0;}
    int n=A[m-1].size();
    int *dp = new int[n];
    
    // For the last row
    for(int i=0;i<n;i++){
        dp[i]=A[m-1][i];
    }
    
    //Bottom-up approach
    for(int i=m-2;i>=0;i--){
        for(int j=0;j<A[i].size();j++){
            dp[j]=A[i][j] + min(dp[j],dp[j+1]);
        }
    }
    
    
    return dp[0];
}