/// dfs on 2D Grid / flood fill algorithm
class Solution {
public:
    /// King's move
    int di[8] = {+0, +0, -1, +1, -1, +1, -1, +1};
    int dj[8] = {+1, -1, +0, +0, +1, +1, -1, -1};
             ///  R    L   U   D   RU  RD  LU  LD

    vector<vector<int>> vis;

    void dfs(int row, int col, auto &v, int initial_color, int color) {
        int n = v.size(), m = v[0].size(), c = initial_color, c2 = color;
        for(int i=0; i<4; i++) {
             int new_row = row + di[i];
             int new_col = col + dj[i];

             if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m and !vis[new_row][new_col] and v[new_row][new_col] == initial_color) {
                 vis[new_row][new_col] = 1;
                 v[new_row][new_col] = color;
                 dfs(new_row, new_col, v, c, c2);
             }
         }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int color) {
        int n = v.size(), m = v[0].size();
        vis = vector<vector<int>> (n + 5, vector<int> (m + 5));
        vis[sr][sc] = 1;
        dfs(sr, sc, v, v[sr][sc], color);

        v[sr][sc] = color;

        return v;
    }
};
