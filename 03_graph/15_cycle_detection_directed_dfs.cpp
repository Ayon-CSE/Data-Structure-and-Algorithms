/// detect cycle in directed graph (dfs)

class Solution {
  public:
    bool dfs(int x, vector<vector<int>> &v, vector<int> &vis, vector<int> &Pathvis) {
        vis[x] = 1;
        Pathvis[x] = 1;

        for (int i : v[x]) {
            if (!vis[i]) {
                if (dfs(i, v, vis, Pathvis) == true) return true;
            } else if (Pathvis[i]) {
                return true;
            }
        }

        Pathvis[x] = 0;
        return false;
    }

    bool isCyclic(int n, vector<vector<int>> &edges) {
        vector<int> vis(n, 0), Pathvis(n, 0);

        vector<vector<int>> v(n);
        for (int i = 0; i < edges.size(); i++) {
            v[edges[i][0]].push_back(edges[i][1]);
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(i, v, vis, Pathvis)) {
                    return true;
                }
            }
        }

        return false;
    }
};
