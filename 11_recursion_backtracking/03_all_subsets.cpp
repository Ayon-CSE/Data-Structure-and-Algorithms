/// all subset using recursion and backtracking
vector<vector<int>> subsets;
void generate(vector<int> &subset, int i, vector<int> &nums) {
    if(i == nums.size()) {
        subsets.push_back(subset);
        return;
    }

    /// take
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);

    /// not take
    subset.pop_back();
    generate(subset, i + 1, nums);

}

    vector<int> v(n), subset;
    for(int i = 0; i < n; i++) cin >> v[i];
    ll sum = accumulate(v.begin(), v.end(), 0LL);

    int i = 0;
    generate(subset, i, v);

    ll min1 = LLONG_MAX;
    for(auto i : subsets) {
      if(i.empty()) continue;
      ll sum2 = 0;
        for(auto j : i) {
            sum2 += j;
        }

        min1 = min(min1, abs(abs(sum - sum2) - sum2));/// (1 - 0) at bitmask
    }

    cout << min1;
