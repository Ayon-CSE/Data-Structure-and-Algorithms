 /// segment tree with nodes
 struct Node {
    int open, close, matched;
};

void build(int index, int low, int high, const string &s, vector<Node> &seg) {
    if (low == high) {
        // Initialize '(' and ')' counts
        if (s[low] == '(') seg[index] = {1, 0, 0};
        else seg[index] = {0, 1, 0};
        return;
    }

    int mid = (low + high) >> 1;
    build(2 * index + 1, low, mid, s, seg);
    build(2 * index + 2, mid + 1, high, s, seg);

    // Merge children nodes
    int matched = min(seg[2 * index + 1].open, seg[2 * index + 2].close);
    seg[index].matched = seg[2 * index + 1].matched + seg[2 * index + 2].matched + matched;
    seg[index].open = seg[2 * index + 1].open + seg[2 * index + 2].open - matched;
    seg[index].close = seg[2 * index + 1].close + seg[2 * index + 2].close - matched;
}

Node range_query(int index, int low, int high, int l, int r, const vector<Node> &seg) {
    // No overlap
    if (high < l || low > r) return {0, 0, 0};

    // Complete overlap
    if (low >= l && high <= r) return seg[index];

    // Partial overlap
    int mid = (low + high) >> 1;
    auto left = range_query(2 * index + 1, low, mid, l, r, seg);
    auto right = range_query(2 * index + 2, mid + 1, high, l, r, seg);

    // Merge results
    int matched = min(left.open, right.close);
    return {
        left.open + right.open - matched,
        left.close + right.close - matched,
        left.matched + right.matched + matched
    };
}

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();

    // Segment tree with Node {open, close, matched}
    vector<Node> seg(4 * n);
    build(0, 0, n - 1, s, seg);

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        --l; --r;

        // Query the range and calculate the result
        auto res = range_query(0, 0, n - 1, l, r, seg);
        cout << (res.matched << 1) << '\n'; // Matched pairs contribute 2 each
    }

    return 0;
}
