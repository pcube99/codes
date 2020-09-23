// https://www.interviewbit.com/problems/palindrome-partitioning/

bool isPalindrom(string s) {
    int i=0,j=s.size()-1;
    while(i < j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void backtrack(vector<vector<string> > &ans, string a, vector<string> v) {
    if(a.size() <= 0)  {
        ans.push_back(v);
        return;
    }
    int n = a.size();
    for(int i=0;i<n;i++) {
        string first = a.substr(0,i+1);
        string second = a.substr(i+1, n);
        if(isPalindrom(first)) {
            v.push_back(first);
            backtrack(ans, second, v);
            v.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string a) {
   vector<vector<string> > ans;
   vector<string> v;
   backtrack(ans, a, v);
   
   return ans;
}
