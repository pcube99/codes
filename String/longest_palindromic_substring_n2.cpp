// https://www.interviewbit.com/problems/longest-palindromic-substring/

int findlps(string s) {
    vector<int> lps(s.size(), 0);
    int i=1,j=0;
    while(i < s.size()) {
        if(s[i] == s[j]) {
            lps[i] = j+1;
            i++;
            j++;
        } else {
            if(j == 0) {
                lps[i] = 0;
                i++;
            } else {
                j = lps[j-1];
            }
        }
    }
    return lps[s.size()-1];
}
string Solution::longestPalindrome(string a) {
    string ans = "", temp = "";
    int n = a.size(), curr = 0;
    for(int i=0;i<a.size();i++) {
        temp = a.substr(i);
        string x = temp;
        reverse(x.begin(), x.end());
        string p = temp + '.'+ x;
        int an = findlps(p);
        if(an > curr) {
            curr = an;
            ans = p.substr(0,an);
        }
    }
    return ans;
} 
