class Solution {
  private:
    void DFS(int node, vector<vector<int>>& adj, vector<int> &vis, vector<int> &ls) {
        vis[node] = 1;
        ls.push_back(node);
        
        // traverse all its neighbours
        for(auto it:adj[node]) {
            if(!vis[it]) {
                DFS(it, adj, vis, ls);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> vis(n, 0);
        int start = 0;
        vector<int> ls;
        DFS(start, adj, vis, ls);
        return ls;
    }
};