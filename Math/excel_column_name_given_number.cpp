// https://practice.geeksforgeeks.org/problems/excel-sheet/0

// https://www.geeksforgeeks.org/find-excel-column-name-given-number/

// https://www.interviewbit.com/problems/excel-column-title/

string Solution::convertToTitle(int a) {
    string ans = "";
    while(a > 0) {
        int rem = a % 26;
        if(rem == 0) {
            ans += 'Z';
            a = (a/26)-1;
        } else {
            ans += ('A'+ (rem-1));
            a = a/26;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
