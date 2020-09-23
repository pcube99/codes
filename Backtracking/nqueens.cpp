// https://www.interviewbit.com/problems/nqueens/

bool isValid(vector<string> &a, int row, int col, int n) {
    for(int i=0;i<col;i++) {
        if(a[row][i]=='Q') 
            return false; 
    }
    for(int i=0;i<n;i++) {
        if(a[i][col]=='Q') 
            return false; 
    }
    for(int i=row,j=col; i>=0 && j>=0;i--,j--) {
        if(a[i][j]=='Q') 
            return false; 
    }
    for(int i=row,j=col;i<n && j>=0;i++,j--) {
        if(a[i][j]=='Q')
            return false;
    }
    return true;
}
void backtrack(vector<vector<string> > &ans, vector<string> &a, int col, int n) {
    if(col >= n ) {
        ans.push_back(a);
        return;
    }
    for(int i=0;i<n;i++) {
        if(isValid(a,i,col,n)) {
            a[i][col] = 'Q';
            backtrack(ans, a,col+1,n);
            a[i][col] = '.';
        }
    }
}
vector<vector<string> > Solution::solveNQueens(int n) {
    vector<vector<string> > ans;
    vector<string> a(n, string(n,'.'));
    backtrack(ans, a,0,n);
    return ans;
}
