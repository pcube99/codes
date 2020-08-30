// https://www.interviewbit.com/problems/largest-continuous-sequence-zero-sum/

vector<int> Solution::lszero(vector<int> &a) {
    vector<int> v,ans;
    int maxi = INT_MIN, l=-1 , r=-1;
    map<long long, int> mp;
    long long sum = 0;
    for(int i=0;i<a.size();i++) {
        sum += a[i];
        if(sum == 0) {
            if(maxi < i+1) {
            maxi = i+1;
            l = 0;
            r = i;
            }
        }
        if(mp.find(sum) == mp.end()) {
            mp.insert(make_pair(sum,i));
        } else {
            if(maxi < i-mp[sum]) {
                l = mp[sum]+1;
                r = i;
                maxi = i-mp[sum];
            }
        }
    }
    if(l != -1 && r != -1) {
    for(int i=l;i<=r;i++) {
        ans.push_back(a[i]);
    }
    }
    
    return ans;
}
