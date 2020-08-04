//https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/

bool pairInSortedRotated(int arr[], int n, int x) 
{ 
    // Find the pivot element 
    int i; 
    for (i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
            break; 
    int l = (i+1)%n;  // l is now index of smallest element 
    int r = i;        // r is now index of largest element 
  
    // Keep moving either l or r till they meet 
    while (l != r) 
    { 
         // If we find a pair with sum x, we return true 
         if (arr[l] + arr[r] == x) 
              return true; 
  
         // If current pair sum is less, move to the higher sum 
         if (arr[l] + arr[r] < x) 
              l = (l + 1)%n; 
         else  // Move to the lower sum side 
              r = (n + r - 1)%n; 
    } 
    return false; 
} 