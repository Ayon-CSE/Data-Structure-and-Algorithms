/// segment tree solved by cnt(frequency) array
  /// build segment tree sum
        int n;
        cin >> n;

        vector<int> v(n);
        int max_val = 0;

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            max_val = max(max_val, v[i]);
        }

        cnt.assign(max_val + 1, 0);
        seg.assign(4 * (max_val + 1), 0);

        for(int i = 0; i < n; i++) {
            cnt[v[i]]++;
        }

        build(0, 0, max_val, cnt, seg);

        ll ans = 0;
        for(int i = 0; i < n; i++) {

            update(0, 0, max_val, v[i], -1, seg);
            if(v[i] > 1)
                ans += range_query(0, 0, max_val, 1, v[i] - 1, seg);
        }

        cout << ans << '\n';

