/// return the node which does not participate in cycle (safe node)
/// dfs implementation

class Solution {
public:
    bool dfs(int x, vector<vector<int>> &v, vector<int> &vis, vector<int> &Pathvis, vector<int> &safe) {
        vis[x] = 1;
        Pathvis[x] = 1;

        for (auto i : v[x]) {
            if (!vis[i]) {
                if (dfs(i, v, vis, Pathvis, safe)) return true;
            }
            else if (Pathvis[i]) {
                return true;
            }
        }

        Pathvis[x] = 0;
        safe[x] = 1;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& v) {
        int n = v.size();
        vector<int> vis(n, 0), Pathvis(n, 0), safe(n, 0);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, v, vis, Pathvis, safe);
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (safe[i]) ans.push_back(i);
        }

        return ans;
    }
};
