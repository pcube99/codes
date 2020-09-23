// https://www.interviewbit.com/problems/kth-permutation-sequence/

// using STL
string Solution::getPermutation(int a, int k) {
    vector<int> v;
    for(int i=1;i<=a;i++)
        v.push_back(i);
    k--;
    while(next_permutation(v.begin(),v.end()) && k!=1) {
        k--;
    }
    
    string s="";
    for(int i: v){
        s = s +  to_string(i); 
    }
    return s;
}