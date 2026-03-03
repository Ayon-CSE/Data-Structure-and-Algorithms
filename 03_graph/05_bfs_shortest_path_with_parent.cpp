/// find shortest path from starting node
void bfs2() {
    par = vector<int> (n + 5, -1);

    queue<int> q;
    q.push(1);
    vis[1] = 1;

    while(q.size()) {
        int x = q.front();
        q.pop();

        for(auto i : adj[x]) {
            if(!vis[i]) {
                q.push(i);
                par[i] = x;
                vis[i] = 1;
            }
        }
    }

    if(par[n] == -1) {
        cout<<"IMPOSSIBLE";
        return;
    }

    vector<int> ans;
    while(n != -1) {
        ans.push_back(n);
        n = par[n];
    }

    reverse(ans.begin(), ans.end());
    cout<<ans.size()<<'\n';
    debug(ans);
}
