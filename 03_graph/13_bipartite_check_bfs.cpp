/// bipartite check for multiple components of bfs
/// always check for multiple components is safe

bool isBipartite(vector<vector<int>>& v) {
        int n = v.size();
        vector<int> color(n, -1);

        for (int start = 0; start < n; ++start) {
            if (color[start] != -1) continue;

            queue<int> q;
            q.push(start);
            color[start] = 0;

            while (!q.empty()) {
                int x = q.front();
                q.pop();

                for (auto i : v[x]) {
                    if (color[i] == -1) {
                        color[i] = !color[x];
                        q.push(i);
                    }
                    else if (color[i] == color[x]) {
                        return false;
                    }
                }
            }
        }

        return true;
}
