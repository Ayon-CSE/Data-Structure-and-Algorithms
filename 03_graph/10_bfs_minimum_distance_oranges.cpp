/// bfs on minimum distance
class Solution {
public:
     /// King's move
    int di[8] = {+0, +0, -1, +1, -1, +1, -1, +1};
    int dj[8] = {+1, -1, +0, +0, +1, +1, -1, -1};
             ///  R    L   U   D   RU  RD  LU  LD

    int orangesRotting(vector<vector<int>>& v) {
        int n = v.size(), m = v[0].size(), max1 = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(v[i][j] == 2) {
                    vector<vector<int>> vis(n + 5, vector<int> (m + 5));
                    queue<tuple<int, int, int>> q;
                    int d = 0;

                    q.push({i, j, d});
                    vis[i][j] = 1;

                    while(q.size()) {
                        auto [x, y, d] = q.front();
                        max1 = max(max1, d);
                        q.pop();

                        for(int k=0; k<4; k++) {
                            int new_row = x + di[k];
                            int new_col = y + dj[k];

                            if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m and !vis[new_row][new_col] and v[new_row][new_col] == 1) {
                                vis[new_row][new_col] = 1;
                                q.push({new_row, new_col, d + 1});
                            }
                        }
                    }
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(v[i][j] == 0) continue;

                if(!vis[i][j]) {
                    return -1;
                }
            }
        }

        return max1;
    }
};
