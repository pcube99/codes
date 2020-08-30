// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &a) {
   int i=0, j=0;
   int n = a.size();
   while(i < n) {
        a[j] = a[i];
       while(a[i] == a[j]) {
           i++;
       }
       j++;
   }
   return j;
}
