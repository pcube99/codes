//https://www.geeksforgeeks.org/topological-sorting/

void topo(int i,int &V, vector<int> adj[],stack<int> &s,int vis[]){
    
    vis[i]=1;
    for(auto it: adj[i]){
        if(!vis[it]){
            topo(it,V,adj,s,vis);
        }
    }
    s.push(i);
}

int* topoSort(int V, vector<int> adj[])
{
    static int a[55];
    stack <int> s;
    int vis[V]={};
    for(int i=0;i<V;i++)
        if(!vis[i])
            topo(i,V,adj,s,vis);
            
    for(int i=0;i<V;i++){
        a[i]=s.top();
        s.pop();
    }
    return a;
}