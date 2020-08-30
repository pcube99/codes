// https://www.interviewbit.com/problems/valid-sudoku/

bool checkRow(vector<string> v, int l) {
    map<char, int> mp;
    for(int i=0;i<9;i++) {
        if(v[l][i] == '.')
            continue;
        if(mp.find(v[l][i]) != mp.end()) {
            return false;
        } else {
            mp[v[l][i]] = 1;
        }
    }
    return true;
}

bool checkCol(vector<string> v, int c) {
    map<char, int> mp;
    for(int i=0;i<9;i++) {
        if(v[i][c] == '.')
            continue;
        if(mp.find(v[i][c]) != mp.end()) {
            return false;
        } else {
            mp[v[i][c]] = 1;
        }
    }
    return true;
}
bool validate(vector<string> v, int r, int c) {
    map<char, int> mp;
    r = (r/3)*3;
    c = (c/3)*3;
    
    for(int i=r;i<r+3;i++) {
        for(int j=c;j<c+3;j++) {
            if(v[i][j] == '.')
                continue;
            if(mp.find(v[i][j]) != mp.end()) {
                return false;
            } else {
                mp[v[i][j]] = 1;
            } 
        }
    }
    return true;
}
int Solution::isValidSudoku(const vector<string> &a) {
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            if((checkRow(a,i) && checkCol(a,j) && validate(a,i,j)) == false) {
                return 0;
            }
        }
    }
    return 1;
}
