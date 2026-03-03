///    part 2 (Real Numbers binary search)
    ld n, k;
    cin>>n>>k;

    vector<ld> v(n);
    for(int i=0; i < n; i++) cin>>v[i];

    ld l = 0, r = 2e10;
    for(int i=0; i < 100; i++) {
        ld mid = (l + r) / 2;
        ll cut = 0;

        for(int j=0; j < n; j++) {
            cut += (v[j] / mid);
        }

        if(cut < k) r = mid;
        else l = mid;
    }

    cout<<fixed<<setprecision(15)<<l;
