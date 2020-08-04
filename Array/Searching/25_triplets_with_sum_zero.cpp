//https://www.geeksforgeeks.org/find-triplets-array-whose-sum-equal-zero/
bool findTriplets(int a[], int n)
{   
    sort(a,a+n);
    for(int k=n-1;k>=0;k--){
    int i=0,j=k-1;
    while(i < j){
        if(a[i]+a[j]+a[k] == 0)
            return true;
        else if(a[i]+a[j] +a[k] <0)
            i++;
        else j--;
    }
    }
    return false;
    
}