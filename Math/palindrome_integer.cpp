// https://www.interviewbit.com/problems/palindrome-integer/

bool isPalindrom(vector<int> arr) {
    int n = arr.size()-1;
    for(int i=0;i<n/2;i++) {
        // cout << arr[i] << " - " << arr[n-1-i] << endl;
        if(arr[i] != arr[n-i]) {
            return false;
        }
    }
    return true;
}
int Solution::isPalindrome(int a) {
    vector<int> arr;
    int aa =a;
    unsigned long long ans = 0;
    if(a < 0) {
        return 0;
    }
    while(a > 0) {
        int rem = a%10;
        ans = (ans*10)+rem;
        a /= 10;
    }
    // for(int i=0;i<arr.size();i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << ans << endl;
    return (int)ans == aa ? 1 : 0;
}
