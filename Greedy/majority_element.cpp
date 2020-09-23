// https://www.interviewbit.com/problems/majority-element/

int Solution::majorityElement(const vector<int> &a) {
    int ele = a[0], count = 1;
    for(int i=1;i<a.size();i++) {
        if(ele == a[i]) {
            count++;
        } else {
            count--;
            if(count == 0) {
                ele = a[i];
                count = 1;
            }
        }
    }
    return ele;
}
