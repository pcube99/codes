// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

int maxLen(int a[],int n){
    int maxi=0;
    int sum=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0)
            maxi=max(maxi,i+1);
        if(mp.find(sum) != mp.end()){
            maxi=max(maxi,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    return maxi;
}
