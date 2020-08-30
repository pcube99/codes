// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

// https://www.interviewbit.com/problems/sort-by-color/


void Solution::sortColors(vector<int> &a) {
    int low = 0, high = a.size()-1, mid =0;
    while(mid <= high) {
        if(a[mid] == 0) {
            swap(a[mid], a[low]);
            low++;
            mid++;
        } else if(a[mid] == 1) {
            mid++;
        } else {
            swap(a[mid], a[high]);
            high--;
        }
    }
    
}

