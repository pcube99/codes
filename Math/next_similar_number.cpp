// https://www.interviewbit.com/problems/next-similar-number/

string Solution::solve(string s) {
    string ans = "";
    int index = -1, n =s.size();
    for(int i=n-2;i>=0;i--) {
        if(s[i] < s[i+1]) {
            index = i;
            break;
        }
    } 
    if(index == -1) {
        return "-1";
    }
    for(int i=0;i<n;i++) {
        if(s[index] < s[n-1-i]) {
            swap(s[index], s[n-1-i]);
            break;
        }
    }
    sort(s.begin()+index+1,s.end());
    return s;
}
