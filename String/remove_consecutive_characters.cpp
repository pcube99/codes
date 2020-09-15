// https://www.interviewbit.com/problems/remove-consecutive-characters/

string Solution::solve(string s, int b) {
    string ans = "", temp ="";
    int i = 0;
    
    while(i < s.size()) {
        int count = 1;
        while(i+1 < s.size() && s[i] == s[i+1]) {
            count++;
            i++;
        } 
        if(count != b) {
            while(count--) {
                ans += s[i];
            }
        }
        i++;
    }
    return ans;
}
