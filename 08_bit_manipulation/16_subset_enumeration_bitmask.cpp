///how many subset generats
array -> 2, 4, 5
         yes or no
         2 * 2 * 2 = 8

n -> 2^n (subset)

/// subset problems using bit masking
   [2, 4, 5] -> 2^3 = 8(subset) -> bitmask(o To 2^n - 1)
    bitmask subset
0 - 0 0 0 - [ ]
1 - 0 0 1 - [2]
2 - 0 1 0 - [4]
3 - 0 1 1 - [2, 4]
4 - 1 0 0 - [5]
5 - 1 0 1 - [2, 5]
6 - 1 1 0 - [4, 5]
7 - 1 1 1 - [2, 4, 5]

vector<vector<int>> ans;

for(int mask=0; mask < (1 << n); mask++) {
    vector<int> subset;
    for(int i=0; i < n; i++) {
        if(mask & (1 << i)) subset.push_back(v[i]);
    }

    ans.push_back(subset);
}

/// power set
int min1 = m;
    for(int i=0; i < (1LL << n); i++) {
        int cnt = 0;
        for(auto [x, y] : v) {
             if(((i >> x) & 1) == ((i >> y) & 1)) {
                cnt++;
            }
        }
        min1 = min(min1, cnt);
    }

ll ans = LLONG_MAX;
for(int i=1; i <= (1 << n); i++) {
    ll sum = 0, sum2 = 0;
    for(int j = 1; j<=n; j++) {
        if(i & (1 << j)) {
            sum += v[j - 1];
        }
        else sum2 += v[j - 1];
    }

    ans = min(ans, max(sum, sum2));
}
