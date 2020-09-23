// https://www.interviewbit.com/problems/sudoku/
// Time complexity: O(9^(n*n)).

vector<int> findEmpty(vector<vector<char> > &a) {
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            if(a[i][j] == '.') {
                return {i,j};
            }
        }
    }
    return {};
}
bool isValid(vector<vector<char> > &a, int row, int col, int num) {
    char n = num + '0';
    for(int i=0;i<9;i++) {
        if(a[i][col] == n) {
            return false;
        }
    }
    for(int i=0;i<9;i++) {
        if(a[row][i] == n) {
            return false;
        }
    }
    int r = row/3, c = col/3;
    for(int i=r*3;i<(r+1)*3;i++) {
        for(int j=c*3;j<(c+1)*3;j++) {
            if(a[i][j] == n) {
                return false;
            }
        }
    }
    return true;
}
bool sudoku(vector<vector<char> > &a) {
    int row,col;
    vector<int> temp = findEmpty(a);
      if(temp.size() == 0) {
        return true;
    }
    row = temp[0];
    col = temp[1];
  
    for(int i=1;i<=9;i++) {
        if(isValid(a,row,col,i)) {
            a[row][col] = i+'0';
            if(sudoku(a) == true) {
                return true;
            }
            a[row][col] = '.';
        }
    }
    return false;
}
void Solution::solveSudoku(vector<vector<char> > &a) {
    bool p = sudoku(a);
}

