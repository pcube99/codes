// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

int Solution::solve(string a) {
    int start = 0, end = a.size()-1, count = 0;
    while(start < end) {
        if(a[start] == a[end]) {
            start++;
            end--;
        } else {
            if(start == 0) {
                end--;
                count++;
            } else {
                count += start;
                start = 0;
            }
        }
    }
    return count;
}
