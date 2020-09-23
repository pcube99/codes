// https://www.interviewbit.com/problems/jump-game-array/

int Solution::canJump(vector<int> &A) {
    int n = A.size();
    if(n <= 1) return 1;
    
    
    int ladder = A[0];
    
    for(int i = 1; i < n; i++) {
        if(i > ladder) return 0;
        
        ladder = max(ladder, i + A[i]);
        
        if(ladder >= n-1) return 1;
    }
    
    
    return 0;
}