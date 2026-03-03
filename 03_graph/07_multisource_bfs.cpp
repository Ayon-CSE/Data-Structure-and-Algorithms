/// multi source bfs
class Solution {
public:
    /// King's move (only 4 directions needed for this problem)
    int di[4] = {0, 0, -1, +1};
    int dj[4] = {+1, -1, 0, 0};
             ///  R    L   U   D

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> v = mat;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        queue<tuple<int, int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == 0) {
                    q.push({i, j, 0});
                    vis[i][j] = 1;
                }
            }
        }

        while (!q.empty()) {
            auto [x, y, d] = q.front(); q.pop();

            for (int i = 0; i < 4; i++) {
                int new_row = x + di[i];
                int new_col = y + dj[i];

                if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m
                    && !vis[new_row][new_col]) {

                    vis[new_row][new_col] = 1;
                    v[new_row][new_col] = d + 1;
                    q.push({new_row, new_col, d + 1});
                }
            }
        }

        return v;
    }
};
