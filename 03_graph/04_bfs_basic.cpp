void bfs() {
    vector<int> bfs;
    vis[1] = 1;
    queue<int> q;
    q.push(1);/// starting node

    while(q.size()) {
        int x = q.front();
        q.pop();
        bfs.push_back(x);

        for(auto i : adj[x]) {
            if(!vis[i]) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }

    debug(bfs);
}
