//https://www.geeksforgeeks.org/queries-left-right-circular-shift-array/
/*
asking for sum of integers present in a range od indexes.
We can evaluate the prefix sum of all elements in the array, prefixsum[i] will denote the sum of all the integers upto ith index.
Now, if we want to find sum of elements between two indexes i.e l and r, we compute it in constant time by just calculating prefixsum[r] – prefixsum[l – 1] .
Now for rotations, if we are rotating the array for every query, that will be highly inefficient.
We just need to track the net rotation. If the tracked number is negative, it means left rotation has domainated else right rotation has dominated. When we are tracking the net rotations, we need to do mod n. As after every n rotation, array will return to its original state.
We need to observe it in such a way that every time we rotate the array, only its indexes are changing.
If we need to answer any query of third type and we have l and r. We need to find what l and r were in the original order. We can easily find it out by adding the net rotations to the index and taking mod n.
Every command can be executed in O(1) time.

 */