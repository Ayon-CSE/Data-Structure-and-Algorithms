vector<int> vis;
vector<vector<int>> adj;

void dfs(int node) {
    vis[node] = true;
    for (auto i : adj[node]) {
        if (!vis[i]) {
            dfs(i);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    adj = vector<vector<int>> (n + 5);
    vis = vector<int> (n + 5);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> ans;
    /// to check connected components
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            ans.push_back(i);
            dfs(i);
        }
    }

    cout<<ans.size() - 1<<'\n';
    for(int i=0; i<ans.size() - 1; i++) {
        cout<<ans[i]<<' '<<ans[i + 1]<<'\n';
    }
}
