// https://www.interviewbit.com/problems/distribute-in-circle/

int Solution::solve(int a, int b, int c) {
    c = c % b;
    a = a %b;
    return (a+c-1)%b;
}
