#define white 0
#define black 2
#define grey 1
int dfs(int s,vector<int> adj[],int visited[]){
   visited[s]=grey;
   for(auto i : adj[s]){
       if(visited[i] == grey)
        return true;
        if(visited[i]==white && dfs(i,adj,visited))
            return true;
   }
   
   visited[s]=black;
   return false;
}
bool isCyclic(int v, vector<int> adj[]){
    int visited[v]={white};
    for(int i=0;i<v;i++){
        if(visited[i] == white){
            if(dfs(i,adj,visited))
                return true;
        }
    }
    
    return false;
}