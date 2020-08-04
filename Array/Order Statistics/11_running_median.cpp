//https://www.geeksforgeeks.org/median-of-stream-of-integers-running-integers/
//https://www.geeksforgeeks.org/median-of-stream-of-running-integers-using-stl/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t,x;
	cin>>t;
	priority_queue<int,vector<int>,greater<int>> minHeap;
    priority_queue<int> maxHeap;
	while(t--)
	{
        cin>>x;
        if(maxHeap.empty() || x < maxHeap.top())
            maxHeap.push(x);
        else
            minHeap.push(x);
            
        if(maxHeap.size() > minHeap.size()+1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(minHeap.size() > maxHeap.size()+1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
        if(maxHeap.size() == minHeap.size())
            cout<<(maxHeap.top()+minHeap.top())/2<<"\n";
        else
        {
            if(maxHeap.size() > minHeap.size())
                cout<<maxHeap.top()<<"\n";
            else
                cout<<minHeap.top()<<"\n";
        }
	}
	return 0;
}