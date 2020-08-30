// https://practice.geeksforgeeks.org/problems/lru-cache/1
int cap=0;
map<int,int> mp;
deque<int> q;
LRUCache::LRUCache(int n){
    cap=n;
    mp.clear();
    q.clear();
}
/*Sets the key x with value y in the LRU cache */
void LRUCache::set(int x, int y) {
    if(mp.find(x) == mp.end()){
        if(mp.size() == cap){
            int pp=q.front();
            q.pop_front();
            mp.erase(pp);
        }
    }
    else{
        deque<int>::iterator ii=q.begin();
        while(*ii !=x)
            ii++;
        mp.erase(x);
        q.erase(ii);
    }
    q.push_back(x); 
    mp[x]=y;
}
/*Returns the value of the key x if 
present else returns -1 */
int LRUCache::get(int x){
    if(mp.find(x) == mp.end())
        return -1;
    int ans=mp[x];
    auto ii=q.begin();
    while(*ii!=x)
        ii++;
    q.erase(ii);
    q.push_back(x);
    return ans;
}