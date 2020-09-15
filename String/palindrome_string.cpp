// https://www.interviewbit.com/problems/palindrome-string/

bool checkalphanumeric(char x){
    if((x <= 'z' && x >= 'a')||( x <= 'Z' && x >= 'A') || (x <= '9' && x >= '0'))
        return true;
return false;
}
int Solution::isPalindrome(string s) {
    int left = 0, right = s.size()-1;
    char x,y;
    while(left <= right) {
        x = tolower(s[left]);
        y = tolower(s[right]);
        if(checkalphanumeric(x) && checkalphanumeric(y)) {
            if(x != y ) {
                return 0;
            }
            left++;
            right--;
        } else if(!checkalphanumeric(x)) {
            left++;
        } else if(!checkalphanumeric(y)) {
            right--;
        } else {
            left++;
            right--;
        }
    }
    return 1;
}
