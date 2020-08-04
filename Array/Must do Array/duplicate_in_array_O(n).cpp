//https://www.interviewbit.com/problems/find-duplicate-in-array/
int Solution::repeatedNumber(const vector<int> &a) {
    int slow=a[0];
    int fast=a[a[0]];
    while(slow != fast){
        slow=a[slow];
        fast=a[a[fast]];
    }
    slow=0;
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
}

