// https://www.interviewbit.com/problems/array-3-pointers/

int Solution::minimize(const vector<int> &a, const vector<int> &b, const vector<int> &c) {
    int ans = INT_MAX;
    int i=0,j=0,k=0, n1 = a.size(), n2 = b.size(), n3 = c.size();
    while(i < n1 && j < n2 && k < n3) {
        int x;
        x = max(abs(a[i]-b[j]), abs(b[j]-c[k]));
        x = max(x, abs(c[k]-a[i]));
        if(b[j] <= a[i] && b[j] <= c[k])
            j++;
        else if(a[i] <= b[j] && a[i] <= c[k])
            i++;
        else if(c[k] <= a[i] && c[k] <= b[j])
            k++;
        ans = min(ans, x);
    }
    return ans;
}

//other simple solution
int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    int diff = INT_MAX;  // Initialize min diff 
  
    // Initialize result 
    int res_i =0, res_j = 0, res_k = 0; 
  
    // Traverse arrays 
    int i=0,j=0,k=0;
    int p = A.size(),q = B.size(), r = C.size();
    while (i < p && j < q && k < r) 
    { 
        // Find minimum and maximum of current three elements 
        int minimum = min(A[i], min(B[j], C[k])); 
        int maximum = max(A[i], max(B[j], C[k])); 
  
        // Update result if current diff is less than the min 
        // diff so far 
        if (maximum-minimum < diff) 
        { 
             res_i = i, res_j = j, res_k = k; 
             diff = maximum - minimum; 
        } 
  
        // We can't get less than 0 as values are absolute 
        if (diff == 0) break; 
  
        // Increment index of array with smallest value 
        if (A[i] == minimum) i++; 
        else if (B[j] == minimum) j++; 
        else k++; 
}

    return diff;
}