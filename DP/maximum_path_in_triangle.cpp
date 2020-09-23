// https://www.interviewbit.com/problems/maximum-path-in-triangle/

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    for(int i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0)
                A[i][j]= max(A[i][j], A[i][j]+A[i-1][j]);
            else
                A[i][j]= max(A[i][j],A[i][j]+max(A[i-1][j],A[i-1][j-1]));
        }
    }
    return *max_element(A[n-1].begin(),A[n-1].end());
}