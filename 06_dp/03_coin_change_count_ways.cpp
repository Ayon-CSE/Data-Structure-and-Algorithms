/// calculate the number of distinct ways you can produce a money sum x
/// using vector elements
ll fun(ll tot, vector<ll> &v, vector<ll> &dp) {
    if(tot == 0) return 1;
    if(tot < 0) return 0;

    if(dp[tot] != - 1) return dp[tot];

    ll sum = 0;
    for(int i=0; i < v.size(); i++) {
        ll res = fun((tot - v[i]), v, dp) % mod;
        sum = ((sum % mod) + (res % mod)) % mod;
    }

    return dp[tot] = sum;
}

    int n, tot;
    cin>>n>>tot;
    const ll N = 1e6 + 5;
    vector<ll> v(n), dp(N, -1);
    for(int i=0; i < n; i++) cin>>v[i];

    cout<<fun(tot, v, dp);
