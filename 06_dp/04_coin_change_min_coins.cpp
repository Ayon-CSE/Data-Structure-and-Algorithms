/// calculate the minimum coins you can produce a money sum x
/// using vector elements

int fun(int tot, vector<int> &v, vector<int> &dp) {
    if(tot == 0) return 0;
    if(tot < 0) return INT_MAX;

    if(dp[tot] != - 1) return dp[tot];

    int min1 = INT_MAX;
    for(int i=0; i < v.size(); i++) {
        int res = fun((tot - v[i]), v, dp);
        if(res != INT_MAX) min1 = min(min1, 1 + res);
    }

    return dp[tot] = min1;
}

    int n, tot;
    cin>>n>>tot;

    const int N = 1e6 + 5;
    vector<int> v(n), dp(N, -1);
    for(int i=0; i < n; i++) cin>>v[i];

    if(fun(tot, v, dp) == INT_MAX) cout<<-1;
    else cout<<fun(tot, v, dp);
