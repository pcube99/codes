//https://www.geeksforgeeks.org/minimum-number-swaps-required-sort-array/
int minSwaps(int a[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        int mini=a[i];
        int flag=0,index;
        for(int j=i+1;j<n;j++){
            if(a[j] < mini){
                mini=a[j];
                index=j;
                flag=1;
            }
        }
        if(flag==1){
            swap(a[i],a[index]);
            count++;
        }
    }
    return count;
    /*Your code here */
}
