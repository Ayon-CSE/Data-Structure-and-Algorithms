/// multi source dfs
class Solution {
public:
    /// King's move
int di[8] = {+0, +0, -1, +1, -1, +1, -1, +1};
int dj[8] = {+1, -1, +0, +0, +1, +1, -1, -1};
        ///  R    L   U   D   RU  RD  LU  LD
    void dfs(int x, int y, auto &v, auto &vis) {
        int n = v.size(), m = v[0].size();
        vis[x][y] = 1;

        for(int i=0; i<4; i++) {
            int new_row = x + di[i];
            int new_col = y + dj[i];

            if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m and !vis[new_row][new_col] and v[new_row][new_col] == 'O') {
                dfs(new_row, new_col, v, vis);
            }
        }
    }

    void solve(vector<vector<char>>& v) {
        int n = v.size(), m = v[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        queue<pair<int, int>> q;
        for(int j=0; j<m; j++) {
            if(v[0][j] == 'O') {
                q.push({0, j});
                vis[0][j] = 1;
            }
        }
        for(int i=0; i<n; i++) {
            if(v[i][0] == 'O') q.push({i, 0}), vis[i][0] = 1;
        }
        for(int i=0; i<n; i++) {
            if(v[i][m - 1] == 'O') q.push({i, m - 1}), vis[i][m - 1] = 1;
        }
        for(int j=0; j<m; j++) {
            if(v[n - 1][j] == 'O') q.push({n - 1, j}), vis[n - 1][j] = 1;
        }

        while(q.size()) {
            auto [x, y] = q.front();
            q.pop();

            dfs(x, y, v, vis);
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(!vis[i][j] and v[i][j] == 'O') v[i][j] = 'X';
            }
        }
    }
};
