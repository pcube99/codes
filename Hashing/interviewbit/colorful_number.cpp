// https://www.interviewbit.com/problems/colorful-number/

int Solution::colorful(int a) {
    map<int, int> mp;
    while(a) {
        int curr = a, m = 1;
        while(curr) {
            m *= curr%10;
            if(mp.find(m) != mp.end())
                return 0;
            mp[m]++;
            curr /= 10;
        }
        a /= 10;
    }
    return 1;
}
