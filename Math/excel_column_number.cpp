// https://www.interviewbit.com/problems/excel-column-number/

// So it is very much similar to converting binary to decimal keeping the base as 26.
// Take the input as string and the traverse the input string from the left to right and 
// calculate the result as follows:

// To convert CDA,
// 3*26*26 + 4*26 + 1
// = 26(3*26 + 4) + 1
// = 26(0*26 + 3*26 + 4) + 1

int Solution::titleToNumber(string a) {
    long long ans = 0;
    for(int i=0;i<a.size();i++) {
        ans *= 26;
        ans += (a[i]-'A')+1;
    }
    return ans;
}
