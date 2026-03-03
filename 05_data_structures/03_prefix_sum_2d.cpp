void Prefix_Sum_2D() {
    int n, q;
    cin>>n>>q;

    vector<vector<char>> v(n + 5, vector<char> (n + 5));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>v[i][j];
        }
    }

    vector<vector<ll>> pref(n + 5, vector<ll> (n + 5));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            pref[i][j] = pref[i][j - 1] + (v[i][j] == '*');
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            pref[i][j] += pref[i - 1][j];
        }
    }

    while(q--) {
        int x, y, x2, y2;
        cin>>x>>y>>x2>>y2;

        cout<<pref[x2][y2] - pref[x2][y - 1] - pref[x - 1][y2] + pref[x - 1][y - 1]<<'\n';
    }
 }
