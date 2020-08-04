//https://practice.geeksforgeeks.org/problems/operations-on-binary-min-heap/1
int MinHeap ::  extractMin()
{   
    if(heap_size <=0)
        return -1;
    if(heap_size==1){
        heap_size--;
        return harr[0];
    }
    if(heap_size < capacity){
    int ans=harr[0];
    swap(harr[0],harr[heap_size-1]);
    heap_size--;
    MinHeapify(0);
    return ans;
    }
}
/* Removes element from position x in the min heap  */
void MinHeap :: deleteKey(int i)
{
    if(i < heap_size){
    decreaseKey(i,INT_MIN);
    extractMin();
    }
    // Your code here
}

void MinHeap ::insertKey(int k){
    if(heap_size > capacity)
        return;
    heap_size++;
    int i=heap_size-1;
    harr[i]=k;
    // MinHeapify(heap_size);
     while (i != 0 && harr[parent(i)] > harr[i]) 
    { 
       swap(harr[i], harr[parent(i)]); 
       i = parent(i); 
    } 
   // Your code here
}
// Decrease Key operation, helps in deleting key from heap
void MinHeap::decreaseKey(int i, int new_val)
{
    if(i > heap_size){
    return;
    }
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(harr[i], harr[parent(i)]);
       i = parent(i);
    }
}
/* You may call below MinHeapify function in 
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
void MinHeap::MinHeapify(int i)
{
    if(i >= heap_size){
    return;
    }
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i])
        smallest = l;
    if (r < heap_size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}