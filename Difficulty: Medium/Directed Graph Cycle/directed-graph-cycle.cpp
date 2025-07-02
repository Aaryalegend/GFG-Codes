class Solution {
  private:
    bool dfsCheck(int node, vector<vector<int>> &adj, int vis[], int pathVis[]) {
        vis[node] = 1;
        pathVis[node] = 1;
        
        // Traverse adjacent nodes
        for(auto it : adj[node]) {
            if(!vis[it]) {
                if(dfsCheck(it, adj, vis, pathVis) == true)
                    return true;
            }
            // If node is visited in the current path => cycle
            else if(pathVis[it])
                return true;
        }
        
        pathVis[node] = 0; // Backtrack
        return false;
    }
  
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v); // directed edge u -> v
        }
        
        int vis[V] = {0};
        int pathVis[V] = {0};
        
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(dfsCheck(i, adj, vis, pathVis) == true)
                    return true;
            }
        }
        return false;
    }
};
