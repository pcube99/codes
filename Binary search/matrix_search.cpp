// https://www.interviewbit.com/problems/matrix-search/

int Solution::searchMatrix(vector<vector<int> > &a, int b) {
    int row = a.size(), col = a[0].size()-1,index;
    for(int i=0;i<row;i++) {
        if(a[i][col] >= b) {
            index = i;
            break;
        }
    }
    int start = 0, end = col,mid;
    while(start <= end) {
        mid = (start+end)/2;
        if(a[index][mid] == b) {
            return 1;
        } else if(a[index][mid] > b) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return 0;
}

int Solution::searchMatrix(vector<vector > &A, int B) {
int n=A.size();
int m,i;
m=A[0].size();
int row=0;int col=m-1;
while(row<n&&col>=0)
{
if(A[row][col]==B)
return 1;
if(A[row][col]>B)
col–;
else
row++;
}
return 0;
}