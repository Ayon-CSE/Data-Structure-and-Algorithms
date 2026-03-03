/// Topological Sort (Directed Acyclic Graph (DAG))
/// u should be appear before than v
5 3
1 2
3 1
4 5

Output:
3 4 1 5 2

stack<int> st;
void dfs(int x, auto &adj, auto &vis) {
    vis[x] = 1;

    for(auto i : adj[x]) {
        if(!vis[i]) {
            vis[i] = 1;
            dfs(i, adj, vis);
        }
    }

    st.push(x);
}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adj(n + 1);
    vector<int> vis(n + 1);
    for(int i=0; i<m; i++) {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

    for(int start = 1; start <= n; start++) {
        if(!vis[start]) {
            dfs(start, adj, vis);
        }
    }

    vector<int> pos(n + 1), ans;
    while(st.size()) {
        auto x = st.top();
        st.pop();

        ans.push_back(x);
    }
    for(int i=0; i<ans.size(); i++) {
        pos[ans[i]] = i;
    }

    for(int i = 1; i<=n; i++) {
        for(auto j : adj[i]) {
            if(pos[i] >= pos[j]) {
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }

    debug(ans);
}
