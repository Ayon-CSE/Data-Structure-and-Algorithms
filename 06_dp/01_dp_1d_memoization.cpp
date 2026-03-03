/// 1D DP Template(Memorization)
int fun(int index, vector<int> &v, vector<int> &dp) {
    if(index == 0) return 0;
    auto right = INT_MAX;

    if(dp[index] != -1) return dp[index];

    auto left = fun(index - 1, v, dp) + abs(v[index] - v[index - 1]);
    if(index > 1) right = fun(index - 2, v, dp) + abs(v[index] - v[index - 2]);

    return dp[index] = min(left, right);
}

vector<int> dp(n + 5, -1);
cout<<fun(n - 1, v, dp)<<'\n';
