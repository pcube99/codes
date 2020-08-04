//https://www.geeksforgeeks.org/detect-cycle-undirected-graph/

int dfs(int s, vector<int> adj[],bool visited[],int parent){
    visited[s] = true; 
    for (auto i : adj[s]) { 
        if (!visited[i]){ 
           if (dfs(i,adj, visited,s)) 
              return true; 
        } 
        else if (i != parent) 
           return true; 
    } 
    return false; 
}
bool isCyclic(vector<int> adj[], int v){
    bool visited[v]={false};
    for (int u = 0; u < v; u++) 
        if (!visited[u]) 
          if (dfs(u, adj,visited, -1)) 
             return true; 
  
    return false; 
}