// https://www.interviewbit.com/problems/distribute-candy/

int Solution::candy(vector<int> &a) {
    vector left(a.size(), 0), right(a.size(), 0);
    for(int i=0; i<a.size(); i++) {
        if(i==0 || a[i] <= a[i-1]) left[i]=1;
        else left[i] = 1+left[i-1];
    }
    for(int i=a.size()-1; i>=0; i--) {
        if(i == a.size()-1 || a[i] <= a[i+1]) right[i]=1;
        else right[i] = 1+right[i+1];
    }
    int sum=0;
    for(int i=0; i<a.size(); i++) 
        sum+=max(left[i], right[i]);
    return sum;
}
