// https://practice.geeksforgeeks.org/problems/circular-tour/1

int tour(petrolPump p[],int n){
    int start=0,capacity=0,deficit=0;
    for(int i=0;i<n;i++){
        capacity+= p[i].petrol-p[i].distance;
        if(capacity < 0){
            deficit+=capacity;
            start=i+1;
            capacity=0;
        }
    }
    if(capacity+deficit >0)
        return start;
    return -1;
}
