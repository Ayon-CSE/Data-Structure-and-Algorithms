///check bit from all j
       cin>>a>>b;
       for (ll i = 0; i < 32; i++) {
            if ((a & (1LL << i)) == (b & (1LL << i)) && (a & (1LL << i)) != 0) {
                sum += 1LL << i;
            }
        }

                    ///OR

       for(int j=0; j<62; j++) {
            int B = (b & (1LL << j)) != 0;
            int C = (c & (1LL << j)) != 0;
            int D = (d & (1LL << j)) != 0;

            if((!B and C and D) or (B and !C and !D)) {
                ok = false;
                break;
            }

            if((!B and D) or (B and !D)) ans |= 1LL << j;
    }

///check bit for all vector element
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        for(int j=0; j<62; j++) {
            for(int i=0; i<n; i++) {
                if(v[i] & 1LL << j) cout<<1;
                else cout<<0;
            }
            cout<<'\n';
        }

               ///or

    vector<vector<ll>> v(n + 5, vector<ll> (62));
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;

        for(int j=0; j<62; j++) {
            v[i][j] = x % 2;
            x /= 2;
        }
    }

    for(int j=0; j<62; j++) {
        for(int i=0; i<n; i++) {
            cout<<v[i][j]<<' ';
        }
        cout<<'\n';
    }

