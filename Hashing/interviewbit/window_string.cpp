// https://www.interviewbit.com/problems/window-string/

// https://www.geeksforgeeks.org/find-the-smallest-window-in-a-string-containing-all-characters-of-another-string/

string Solution::minWindow(string s, string t) {
    if(t.size() > s.size()) {
        return "";
    }
    string ans = "";
    int mini = INT_MAX,star;
    int mps[256]={0}, mpt[256]={0};
    for(int i=0;i<t.size();i++) {
        mpt[t[i]]++;
    }   
    int start=0,end=0,rem = 0;
    while(end < s.size()) {
        mps[s[end]]++;
        if(mpt[s[end]] !=0 && mps[s[end]] <= mpt[s[end]]) {
            rem++;
        }
        if(rem == t.size()) {
            while(mps[s[start]] > mpt[s[start]] || mpt[s[start]] == 0) {
                if(mps[s[start]] > mpt[s[start]])
                    mps[s[start]]--;
                start++;
            }
            int xx = end-start+1;
            if(mini > xx) {
                // cout << star << " 0 " << mini << endl;
                mini = xx;
                star = start;
                // cout << star << " 1 " << mini << endl;
            }
        }
       
        end++;
    }
    // cout << star << " "<< mini << endl;
    // return "";
    
    return mini == INT_MAX ? "" : s.substr(star,mini);
}
