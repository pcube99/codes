// https://www.interviewbit.com/problems/anagrams/

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string, vector<int> > mp;
    vector<vector<int> > vec;
    vector<string> b;
    for(auto i:A) { 
        sort(i.begin(),i.end());
        b.push_back(i);
    }
    for(int i=0;i<b.size();i++)
        mp[b[i]].push_back(i+1);
    for(auto i:mp)
        vec.push_back(i.second);
    return vec;
}
