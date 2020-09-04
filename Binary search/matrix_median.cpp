// https://www.interviewbit.com/problems/matrix-median/

// https://www.geeksforgeeks.org/find-median-row-wise-sorted-matrix/

// So the Code is here like lower_bound() where we find the lowest number possible which satisfy the desired position .
// Lets take an example [ 1 , 4 , 5 , 10 , 12 , 13 , 21 ]
// desired position = 4
// mid = (1+21)/2 = 11
// for 11 upper_bound() sum in code will return 4
// but look in code we don’t stop here we only know that the final answer will be <=11
// therefore we did max=mid
// So ultimately like I said code is like lower_bound so it will find least no. from 1 to 11 which gives the desired position which in this case can only be 10.

#include<bits/stdc++.h>
int Solution::findMedian(vector<vector<int> > &a) {
    int start,end,mid,row,col,maxi=INT_MIN, mini = INT_MAX;
    row = a.size();
    col = a[0].size();
    for(int i=0;i<row;i++) {
        mini = min(mini, a[i][0]);
        maxi = max(maxi, a[i][col-1]);
    }
    int desired = (1+(row*col))/2;
    start = mini, end = maxi;
    while(start < end) {
        mid = (start+end)/2;
        int count = 0;
        for(int i=0;i<row;i++) {
            count += upper_bound(a[i].begin(), a[i].end(), mid)-a[i].begin();
        }
        if(count < desired) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}
