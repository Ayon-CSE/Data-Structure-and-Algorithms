/// bfs on 2D grid / flood fill algorithm
class Solution {
public:
    /// King's move
    int di[8] = {+0, +0, -1, +1, -1, +1, -1, +1};
    int dj[8] = {+1, -1, +0, +0, +1, +1, -1, -1};
        ///  R    L   U   D   RU  RD  LU  LD

    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int color) {
         int n = v.size(), m = v[0].size();
         queue<pair<int, int>> q;
         vector<vector<int>> vis(n, vector<int> (m));
         q.push({sr, sc});
         vis[sr][sc] = 1;

         while(q.size()) {
             auto [x, y] = q.front();
             q.pop();

             for(int i=0; i<4; i++) {
                 int new_row = x + di[i];
                 int new_col = y + dj[i];

                 if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m and !vis[new_row][new_col] and v[new_row][new_col] == v[sr][sc]) {
                     v[new_row][new_col] = color;
                     vis[new_row][new_col] = 1;
                     q.push({new_row, new_col});
                 }
             }
         }

         v[sr][sc] = color;

         return v;
    }
};
