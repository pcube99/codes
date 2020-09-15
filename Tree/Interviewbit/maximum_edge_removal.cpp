// https://www.interviewbit.com/problems/maximum-edge-removal/

int Solution::solve(int a, vector<vector<int> > &b) {
    map<int,int> degree, parent;
    int maxi = INT_MIN,ans=0;
    for(int i=0;i<b.size();i++) {
        int p = b[i][0];
        int c = b[i][1];
        degree[p]++;
        parent[c] = p;
        maxi = max({maxi, p, c});
    }
    for(int i=maxi;i>1;i--) {
        if(degree[i]%2 ) {
            degree[parent[i]]--;
            ans++;
        }
    }
    return ans;
}
