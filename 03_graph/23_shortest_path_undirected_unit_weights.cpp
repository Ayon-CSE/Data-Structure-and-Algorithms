/// shortest path at undirected graph with unit weights
class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        int n = adj.size();
        queue<pair<int, int>> q;
        q.push({src, 0});

        vector<int> dist(n, 1e9);
        dist[src] = 0;

        while(q.size()) {
            int x = q.front().first, y = q.front().second;
            q.pop();

            for(int i : adj[x]) {
                if(dist[x] + 1 < dist[i]) {
                    dist[i] = dist[x] + 1;
                    q.push({i, dist[i]});
                }
            }
        }

        for(int i=0; i<n; i++) {
            if(dist[i] == 1e9) dist[i] = -1;
         }

         return dist;
    }
};
