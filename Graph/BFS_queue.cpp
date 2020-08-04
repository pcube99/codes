void bfs(int s, vector<int> adj[], bool vis[]){
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int ss=q.front();
        q.pop();
        cout << ss << " ";
        for(auto i : adj[ss]){
            if(vis[i]==false){
                q.push(i);
                vis[i]=true;   
            }
        }
    }
    
}