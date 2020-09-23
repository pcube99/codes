// https://www.interviewbit.com/problems/gas-station/

int Solution::canCompleteCircuit(const vector<int> &a, const vector<int> &b) {
    int capacity = 0, rem = 0,index;
    for(int i=0;i<a.size();i++) {
        capacity += a[i]-b[i];
        if(capacity < 0) {
            rem += capacity;
            capacity = 0;
            index = i+1;
        }
    }
    if(rem + capacity < 0) {
        return -1;
    }
    return index;
}
