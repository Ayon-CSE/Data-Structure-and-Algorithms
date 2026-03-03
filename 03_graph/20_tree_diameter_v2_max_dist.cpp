/// tree diameter koraaaa
const int N = 1e5 + 9;
vector<vector<pair<int, int>>> g(N);
int max1 = 0, l = -1;

void dfs(int u, int p, vector<int> &dis) {
    if(dis[u] > max1) {
        max1 = dis[u];
        l = u;
    }

    for(auto [v, w] : g[u]) {
        if(v != p) {
            dis[v] = dis[u] + w;
            dfs(v, u, dis);
        }
    }
}

void solve() {
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        g[i].clear();
    }

    for(int i=0; i<n - 1; i++) {
        int u, v, w;
        cin>>u>>v>>w;

        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    vector<int> tmp(n + 5, 0), ds(n + 5, 0), de(n + 5, 0);

    max1 = 0;
    dfs(1, -1, tmp);

    int A = l;

    max1 = 0;
    dfs(A, -1, de);

    int B = l;

    max1 = 0;
    dfs(B, -1, ds);

    for(int i=1; i<=n; i++) {
        cout<<max(ds[i], de[i])<<' ';
    }
    cout<<endl;
}
