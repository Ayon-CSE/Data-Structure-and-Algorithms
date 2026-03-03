void diagonal_left_right() {
        int n, m;
        cin>>n>>m;

        vector<vector<int>> v(n + 1, vector<int> (m + 1, 0));
        ll max1 = -1;
        map<ll, ll> right, left;
        for(int i=1; i<=n; i++) {
           for(int j=1; j<=m; j++) {
              cin>>v[i][j];

              right[i + j] += v[i][j];
              left[i - j] += v[i][j];
           }
        }

        for(int i=1; i<=n; i++) {
           for(int j=1; j<=m; j++) {
              max1 = max(max1, right[i + j] + left[i - j] - v[i][j]);
           }
        }

        cout<<max1<<'\n';
 }
