// https://www.interviewbit.com/problems/diffk-ii/

int Solution::diffPossible(const vector<int> &a, int b) {
    if(a.size() == 1) {
        return 0;
    }
    map<int,int> mp;
    for(int i=0;i<a.size();i++) {
        if(mp.find(a[i]+b) != mp.end()) {
            return 1;
        } else if(mp.find(a[i]-b) != mp.end()) {
            return 1;
        } else {
            mp[a[i]] = 1;
        }
    }
    return 0;
}
