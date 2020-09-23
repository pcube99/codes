// https://www.interviewbit.com/problems/min-jumps-array/

int Solution::jump(vector<int> &A) {
    int max_reach = A[0];
int min_jumps = 1;
int reach = -1;
if(A.size() == 1){
    return 0;
}

for(int i = 1; i < A.size(); i++)
{
    if(i > max_reach)
    {
        min_jumps++;
        max_reach = reach;
        reach = -1;
    }
    
    if(i<= max_reach && i + A[i] > reach)
    {
       reach = i + A[i];
    }
}

if(max_reach < A.size()-1 || max_reach == -1){
    min_jumps = -1;
}

return min_jumps;
}
