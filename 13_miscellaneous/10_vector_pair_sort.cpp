void vector_pair() {
       int n;
       cin>>n;
       vector<vector<pair<ll,ll>>> v(3, vector<pair<ll,ll>> (n));

       for(int i=0; i<3; i++) {
          for(int j=0; j<n; j++) {
             cin>>v[i][j].first;
             v[i][j].second = j;
          }
        }

        for(int i=0; i<3; i++) {
            sort(v[i].rbegin(), v[i].rend());
        }
}
