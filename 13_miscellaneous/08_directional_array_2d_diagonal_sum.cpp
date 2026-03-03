void directionalArray2() {
        int n, m;
        cin>>n>>m;

        vector<vector<int>> v(n + 1, vector<int> (m + 1));
        for(int i=1; i<=n; i++) {
           for(int j=1; j<=m; j++) {
              cin>>v[i][j];
           }
        }

        vector<int> r = {1, -1, -1, 1};
        vector<int> c = {1, -1, 1, -1};

        ll max1 = -1;
        for(int i=1; i<=n; i++) {
           for(int j=1; j<=m; j++) {
              ll sum = v[i][j];

              for(int l=0; l<4; l++) {
                 ll r2 = i + r[l];
                 ll c2 = j + c[l];

                 while(r2 >= 1 and r2 <= n and c2 >= 1 and c2 <= m) {
                    sum += v[r2][c2];
                    r2 += r[l];
                    c2 += c[l];
                 }
              }

              max1 = max(max1, sum);
           }
        }

       cout<<max1<<'\n';
}
