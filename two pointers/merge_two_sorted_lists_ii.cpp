// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

// using no extra space
void Solution::merge(vector<int> &A, vector<int> &B)
{
    
    // O(1) space
    // If all elements of B are placed in array
    // then elements of A are already in place
    
    int i = A.size() - 1; // i pointing to last index of A
    int j = B.size() - 1; // j pointing to last index of B
    
    int lastPos = A.size() + B.size() - 1; // lastPos pointing to last index of merged array A and B
    
    A.resize(A.size() + B.size());
    
    while(j >= 0)
    {
        if(i >= 0 and A[i] > B[j])
            A[lastPos--] = A[i--];
        else
            A[lastPos--] = B[j--];
    }
    
}

// simple
void Solution::merge(vector<int> &a, vector<int> &b) {
    int i=0, j=0;
    vector<int> ans;
    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) {
            ans.push_back(a[i]);
            i++;
        } else if(a[i] > b[j]) {
            ans.push_back(b[j]);
            j++;
        } else {
            ans.push_back(a[i]);
            ans.push_back(b[j]);
            i++;
            j++;
        }
    }
    while(i < a.size()) {
        ans.push_back(a[i]);
        i++;
    }
    while(j < b.size()) {
        ans.push_back(b[j]);
        j++;
    }
    a = ans;
}

