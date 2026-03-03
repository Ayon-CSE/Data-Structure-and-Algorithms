/// detect a cycle in undirected graph (BFS)
class Solution {
  public:
     bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> adj[V + 5], vis(V + 5);
        int min1 = INT_MAX;
        for(int i=0; i<edges.size(); i++) {
             int x = edges[i][0];
             int y = edges[i][1];
             min1 = min({min1, x, y});

             adj[x].push_back(y);
             adj[y].push_back(x);
        }

       for(int i = min1; i <= V; i++) {
          if(!vis[i]) {
              queue<pair<int, int>> q;
              vis[i] = 1;
              q.push({i, -1});

              while(!q.empty()) {
                  int x = q.front().first;
                  int y = q.front().second;
                  q.pop();

                  for(int i : adj[x]) {
                     if(!vis[i]) {
                        vis[i] = 1;
                        q.push({i, x});
                     }
                     else if(i != y) {
                        return true;
                     }
                   }
               }
          }
       }

       return false;
    }

};
