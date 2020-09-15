// https://www.interviewbit.com/problems/convert-to-palindrome/

int Solution::solve(string s) {
    int left = 0, right = s.size()-1, flag = 1;
    while(left <= right) {
        if(s[left] == s[right]) {
            left++;
            right--;
        } else {
            if(s[left+1] == s[right] && flag) {
                left += 2;
                right--;
            } else if(s[left] == s[right-1] && flag) {
                right -= 2;
                left++;
            } else {
                return 0;
            }
            flag = 0;
        }
    }
    return 1;
}
