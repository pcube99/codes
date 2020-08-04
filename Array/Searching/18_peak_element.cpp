//https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/
int peakElement(int arr[], int n){
    // for(int i=0;i<n;i++)
    //     cout << arr[i] << endl;
    if(arr[0] > arr[1]){
        // cout << "gg";
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            return i;
    }
    if(arr[n-1] > arr[n-2])
        return n-1;
    
}