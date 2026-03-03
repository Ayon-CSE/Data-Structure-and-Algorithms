/// Tree Diameter
const int N = 30000 + 9;
vector<vector<pair<int, int>>> g(N);
vector<int> dis(N, 0);
int max1 = 0, l = -1;

void dfs(int u, int p) {
    if(dis[u] > max1) {
        max1 = dis[u];
        l = u;
    }

    for(auto [v, w] : g[u]) {
        if(v != p) {
            dis[v] = max(dis[v], dis[u] + w);
            dfs(v, u);
        }
    }
}

void solve(int cs) {
    cout<<"Case "<<cs<<": ";

    int n;
    cin>>n;

    max1 = 0;
    l = -1;
    for(int i=0; i<n; i++) {
        g[i].clear();
        dis[i] = 0;
    }

    for(int i=0; i<n - 1; i++) {
        int u, v, w; cin>>u>>v>>w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    dfs(0, -1);

    max1 = 0;
    for(int i=0; i<n; i++) {
        dis[i] = 0;
    }
    dfs(l, -1);

    cout<<max1<<endl;
}
