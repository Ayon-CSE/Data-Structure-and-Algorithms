/// all subarray xor -->
   (cnt1 * cnt0) * (1LL << bits);
/// all subarray with xor * subarray length
   (cnt1 * (i + 1) - tot1) * (1LL << bits);
   implementation ->
    ll n, ans = 0;
    cin>>n;

    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int j=0; j<=31; j++) {
        ll cnt0 = 0, cnt1 = 0, sum0 = 0, sum1 = 0;
        for(int i=0; i<n; i++) {
            if((v[i] >> j) & 1) {
                swap(cnt0, cnt1);
                swap(sum0, sum1);

                cnt1++;
                sum1 += i;
            }
            else cnt0++, sum0 += i;

            ans = modadd(ans, modmul(modsub(modmul(cnt1, i + 1), sum1), 1LL << j));
        }
    }

    cout<<ans;
