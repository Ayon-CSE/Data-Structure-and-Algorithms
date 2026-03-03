/// shortest path at Directed Acyclic Graph(DAG)
/// using topological sort

class Solution {
public:
    stack<int> st;

    void dfs(int x, vector<vector<pair<int, int>>> &adj, vector<int> &vis) {
        vis[x] = 1;

        for (auto i : adj[x]) {
            int v = i.first;
            int w = i.second;
            if (!vis[v]) {
                dfs(v, adj, vis);
            }
        }

        st.push(x);
    }

    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < E; i++) {
            int x = edges[i][0], y = edges[i][1], w = edges[i][2];
            adj[x].push_back({y, w});
        }

        vector<int> vis(V, 0), dist(V, INT_MAX);
        dist[0] = 0;

        for (int start = 0; start < V; start++) {
            if (!vis[start]) {
                dfs(start, adj, vis);
            }
        }

        while (!st.empty()) {
            int x = st.top();
            st.pop();

            if (dist[x] != INT_MAX) {
                for (auto i : adj[x]) {
                    int v = i.first;
                    int w = i.second;

                    if (dist[x] + w < dist[v]) {
                        dist[v] = dist[x] + w;
                    }
                }
            }
        }

        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX) dist[i] = -1;
        }

        return dist;
    }
};
