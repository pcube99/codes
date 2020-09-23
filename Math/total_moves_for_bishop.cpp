// https://www.interviewbit.com/problems/total-moves-for-bishop/

// you have to find out minimum difference between edges and current position
// i.e. lets say your current position is 4,4
// four corners of the board are
// (8,8),(1,8),(8,1)(1,1)
// positional differences are (4,4),(3,4),(4,3)(3,3)
// sum of minimums will be the answer

int Solution::solve(int a, int b) {
    int x1,x2,x3,x4;
    x1 = min(8-a,8-b);
    x2 = min(a-1,b-1);
    x3 = min(a-1,8-b);
    x4 = min(8-a,b-1);
    return x1+x2+x3+x4;
}
