// https://www.interviewbit.com/problems/substring-concatenation/

vector<int> Solution::findSubstring(string s, const vector<string> &b) {
    vector<int> ans;
    unordered_map<string, int> mps, mpb;
    int n = s.size(), l = b[0].size()*b.size(), k = b[0].size();
    for(auto i : b) {
        mpb[i]++;
    }
    for(int i=0;i<n-l+1;i++) {
        for(int j=i;j<i+l;j+=k) {
            string temp = s.substr(j,k);
            mps[temp]++;
        }
        if(mps == mpb) {
            ans.push_back(i);
        }
        mps.clear();
    }
    
    return ans;
}

