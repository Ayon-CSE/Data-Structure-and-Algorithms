void subarray_binary_search() {
        ll n, k;
        cin>>n>>k;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        ll l = *max_element(v.begin(), v.end()), r = 2e18, ans = -1;
        while(l <= r) {
            ll mid = l + (r - l) / 2;
            bool ok = true;

            int subarray = 1;
            ll sum = 0;
            for(int i=0; i<n; i++) {
                if(sum + v[i] <= mid) {
                    sum += v[i];
                }
                else {
                    subarray++;
                    sum = v[i];
                }
            }

            if(subarray > k) ok = false;

            if(ok) ans = mid, r = mid - 1;
            else l = mid + 1;
        }

        cout<<ans;
}
