/// topological sort using bfs
/// kahan's algorithm

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n + 1);
    for(int i=0; i<m; i++) {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

    vector<int> indegree(n + 1, 0), ans;
    for(int i=1; i<=n; i++) {
        for(auto j : adj[i]) {
            indegree[j]++;
        }
    }

    queue<int> q;
    for(int i=1; i<=n; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    while(q.size()) {
        auto x = q.front();
        q.pop();
        ans.push_back(x);

        for(auto i : adj[x]) {
            indegree[i]--;
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
    }

    /// detect a cycle in directed graph
    vector<int> pos(n + 1);
    for(int i=0; i<ans.size(); i++) {
        pos[ans[i]] = i;
    }

    for(int i=1; i<=n; i++) {
        for(auto j : adj[i]) {
            if(pos[i] >= pos[j]) {
                cout<<"Sandro fails.";
                return;
            }
        }
    }

    /// or
    if(ans.size() < n) cout<<"Cycle detects";
    else cout<<"Acyclic";

    debug(ans);
}
