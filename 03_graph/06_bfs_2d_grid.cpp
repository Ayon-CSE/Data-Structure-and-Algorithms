/// bfs on 2D Grid

vector<vector<char>> v;
vector<vector<int>> vis;

int di[] = {+1, -1, +0, +0, +1, +1, -1, -1};
int dj[] = {+0, +0, -1, +1, -1, +1, -1, +1};

int solve() {
    int n, m;
    cin>>m>>n;

    v = vector<vector<char>> (n, vector<char> (m));
    vis = vector<vector<int>> (n, vector<int> (m));

    /// starting node
    int X = -1, Y = -1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>v[i][j];

            if(v[i][j] == '@') {
                X = i;
                Y = j;
            }
        }
    }

    queue<pair<int, int>> q;
    int ans = 1;
    q.push({X, Y});/// starting node
    vis[X][Y] = 1;

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for(int i=0; i<8; i++) {
            int new_row = x + di[i];
            int new_col = y + dj[i];

            if(new_row >= 0 and new_row < n and new_col >= 0 and new_col < m and !vis[new_row][new_col] and v[new_row][new_col] == '.') {
                vis[new_row][new_col] = 1;
                ans++;
                q.push({new_row, new_col});
            }
        }
    }

    return ans;
}
