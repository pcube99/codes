// https://www.interviewbit.com/problems/2-sum/

vector<int> Solution::twoSum(const vector<int> &a, int b) {
    unordered_map<int, int > mp;
    for(int i=0;i<a.size();i++) {
        if(mp[b-a[i]]) {
            return { mp[b-a[i]], i+1};
        } 
        if(mp[a[i]] == 0){
            mp[a[i]] = i+1;
        }
    }
    return {};
}
