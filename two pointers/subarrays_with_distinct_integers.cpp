// https://www.interviewbit.com/problems/subarrays-with-distinct-integers/

// So the idea is to find the count of subarrays with at most B different integers, 
// let it be C(B), and the count of subarrays with at most (B - 1) different integers, 
// let it be C(B - 1) and finally take their difference, C(B) – C(B – 1) 
// which is the required answer.
int count(vector<int> &a, int b) {
     map<int,int> mp;
    int n = a.size(), left =0, right=0 , ans=0;
    while(right < n) {
        if(mp.find(a[right]) == mp.end()) {
            mp.insert(make_pair(a[right], 0));
        }
        mp[a[right]]++;
        while(mp.size() > b) {
            mp[a[left]]--;
            
            if(mp[a[left]] == 0) {
                mp.erase(a[left]);
            }
            left++;
        }
            ans += right - left +1;
        right++;
    }
    return ans;
}
int Solution::solve(vector<int> &a, int b) {
   
    return count(a,b)-count(a,b-1);
    
}