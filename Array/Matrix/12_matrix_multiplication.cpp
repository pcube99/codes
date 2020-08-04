//https://www.geeksforgeeks.org/c-program-multiply-two-matrices/
void multiply(int A[][100], int B[][100], int C[][100], int n) {
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            int v = 0;
            for (int k=0; k < n; k++) {
                v += A[i][k]*B[k][j];
            }
            C[i][j] = v;
        }
    }
