//https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

/*
    1. find pivot element where element is decresing;
    2. call binary serch in first half m 
    3. if(a[mid] > x)
        binart search second half
 */

/*
    Input arr[] = {3, 4, 5, 1, 2}
Element to Search = 1
  1) Find out pivot point and divide the array in two
      sub-arrays. (pivot = 2)
  2) Now call binary search for one of the two sub-arrays.
      (a) If element is greater than 0th element then
             search in left array
      (b) Else Search in right array
          (1 will go in else as 1 < 0th element(3))
  3) If element is found in selected sub-array then return index
     Else return -1.
 */