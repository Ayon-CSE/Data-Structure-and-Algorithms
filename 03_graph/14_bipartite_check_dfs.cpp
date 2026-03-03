/// bipartite check for multiple components of bfs
/// always check for multiple components is safe

class Solution {
public:
    bool dfs(int x, const vector<vector<int>>& v, vector<int>& color) {
        for (auto i : v[x]) {
            if (color[i] == -1) {
                color[i] = !color[x];
                if (!dfs(i, v, color)) return false;
            }
            else if (color[i] == color[x]) {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& v) {
        int n = v.size();
        vector<int> color(n, -1);

        for (int start = 0; start < n; ++start) {
            if (color[start] == -1) {
                color[start] = 0;
                if (!dfs(start, v, color)) return false;
            }
        }

        return true;
    }
};
