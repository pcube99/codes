//https://www.geeksforgeeks.org/print-left-rotation-array/
// Function to leftRotate array multiple times 
void leftRotate(int arr[], int n, int k) 
{ 
    /* To get the starting point of rotated array */
    int mod = k % n; 
  
    // Prints the rotated array from start position 
    for (int i = 0; i < n; i++) 
        cout << (arr[(mod + i) % n]) << " "; 
  
    cout << "\n"; 
} 