// https://www.interviewbit.com/problems/points-on-the-straight-line/

int Solution::maxPoints(vector<int> &a, vector<int> &b) {
    int n = a.size();   
    if(n <= 2) {
        return n;
    }
    map<pair<int,int>, int > mp;
    int vertical, overlap, maxi = INT_MIN, currmaxi = INT_MIN;
    for(int i=0;i<n-1;i++) {
        vertical = overlap = currmaxi = 0;
        for(int j=i+1;j<n;j++) {
            if(b[j] == b[i] && a[j] == a[i]) {
                overlap++;
            } else if(b[j] == b[i]) {
                vertical++;
            } else {
                int dy = b[j]-b[i];
                int dx = a[j]-a[i];
                int gc = __gcd(dx, dy);
                dy /= gc;
                dx /= gc;
                mp[make_pair(dy,dx)]++;
                currmaxi = max(currmaxi, mp[make_pair(dy,dx)]);
            }
            currmaxi = max(currmaxi,  vertical);
        }
        maxi = max(maxi, currmaxi+overlap+1);
        mp.clear();
        
    }
    return maxi;
}
