/// long long dfs, return ans

int di[8] = {+0, +0, -1, +1, -1, +1, -1, +1};
int dj[8] = {+1, -1, +0, +0, +1, +1, -1, -1};
        ///  R    L   U   D   RU  RD  LU  LD

ll dfs(int x, int y, vector<vector<int>> &v, vector<vector<int>> &vis) {
    int n = v.size(), m = v[0].size();
    vis[x][y] = 1;
    ll sum = v[x][y];

    for(int i = 0; i < 4; i++) {
        int new_row = x + di[i];
        int new_col = y + dj[i];

        if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m
           and !vis[new_row][new_col] and v[new_row][new_col] != 0) {
            sum += dfs(new_row, new_col, v, vis);
        }
    }

    return sum;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m)), vis(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    ll max1 = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] != 0 and !vis[i][j]) {
                max1 = max(max1, dfs(i, j, v, vis));
            }
        }
    }

    cout << max1 << '\n';
}
