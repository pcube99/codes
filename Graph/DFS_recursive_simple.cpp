void dfs(int s, vector<int> g[], bool vis[]){
    if(vis[s] == true)
        return;
    vis[s]=true;
    cout << s << " ";
    for(auto i : g[s]){
        dfs(i,g,vis);
    }
}