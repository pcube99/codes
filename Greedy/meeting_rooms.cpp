// https://www.interviewbit.com/problems/meeting-rooms/

int Solution::solve(vector<vector<int> > &A) {
    
     vector<pair<int,int>> answer;
    
  
    
    for(int i=0;i<A.size();i++){
        answer.push_back(make_pair(A[i][0],1));
        answer.push_back(make_pair(A[i][1],0));


    }
    
    sort(answer.begin(),answer.end());
    

    
    int curr_rooms=0, max_rooms=0;
    for(pair<int,int> x:answer){
        if(x.second==1) curr_rooms++;
        if(x.second==0) curr_rooms--;
        
        if(max_rooms<curr_rooms) max_rooms=curr_rooms;
    }
    
    // for(auto x : answer) cout<<x.first<<" "<<x.second<<endl;

    
    
    return max_rooms;
    
}

int Solution::solve(vector<vector<int> > &A)
{

// Sorting array with respect to the starting time
sort(A.begin(), A.end());

// min Heap through priority queue to get the minimum of the end times in queue at top
priority_queue<int, vector<int>, greater<int> > minEndTime;

// if there are no meetings
if(A.size() == 0)
    return 0;

// Pushing the end time of 1st meeting in queue
minEndTime.push(A[0][1]);

//rooms required
int maxRooms = 1;
int presentRooms;

for (int i = 1; i < A.size(); i++)
{
    // till start time of a meeting is greater than the stortest end time in queue
    // then pop out the meeting that are over
    while(A[i][0] >= minEndTime.top() && !minEndTime.empty())
    {
        // meeting is over
        minEndTime.pop();
    }
    
    // pushing end time of ith meeting in the queue
    minEndTime.push(A[i][1]);
    
    // No. of meetings that are presently going on
    presentRooms = minEndTime.size();
    
    // Storing the maximum no. of rooms
    maxRooms = max(maxRooms, presentRooms);
}
return maxRooms;
}