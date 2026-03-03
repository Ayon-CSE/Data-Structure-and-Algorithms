/// detect a cycle in undirected graph (DFS)
class Solution {
  public:
     int N = 1e5;
     vector<int> adj[100005]; // or N + 5

     bool dfs(int x, int par, vector<int>& vis) {
         vis[x] = 1;
         for(auto i : adj[x]) {
             if(!vis[i]) {
                 if(dfs(i, x, vis)) return true;
              }
             else if(i != par) {
                 return true;
             }
         }
         return false;
     }

     bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> vis(V + 5, 0);  // ✅ Initialize here

        int min1 = INT_MAX;
        for(int i = 0; i < edges.size(); i++) {
             int x = edges[i][0];
             int y = edges[i][1];
             min1 = min({min1, x, y});

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for(int i = min1; i <= V; i++) {
            if(!vis[i]) {
                if(dfs(i, -1, vis)) {
                    return true;
                }
            }
        }

        return false;
    }
};
