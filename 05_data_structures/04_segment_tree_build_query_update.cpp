/// segment tree
void build(int index, int low, int high, vector<int> &v, vector<int> &seg) {
    if(low == high) {
        seg[index] = v[low];
        return;
    }

    int mid = (high + low) >> 1;
    build(2 * index + 1, low, mid, v, seg);
    build(2 * index + 2, mid + 1, high, v, seg);

    seg[index] = min(seg[2 * index + 1], seg[2 * index + 2]);
}

int range_query(int index, int low, int high, int l, int r, vector<int> &seg) {
    /// no overlap -> [low high] [l r] or [l r] [low high]
    if(high < l or r < low) return INT_MAX;

    /// complete overlap -> [l low high r]
    if(low >= l and high <= r) return seg[index];

    /// partial overlap -> [2 5] [4 6]
    int mid = (low + high) >> 1;
    int left = range_query(2 * index + 1, low, mid, l, r, seg);
    int right = range_query(2 * index + 2, mid + 1, high, l, r, seg);
    return min(left, right);
}

void update(int index, int low, int high, int i, int value, vector<int> &seg) {
    if(low == high) {
        seg[index] = value;
        return;
    }

    int mid = (low + high) >> 1;
    if(i <= mid) update(2 * index + 1, low, mid, i, value, seg);
    else update(2 * index + 2, mid + 1, high, i, value, seg);

    seg[index] = min(seg[2 * index + 1], seg[2 * index + 2]);
}

/// just when say query
    int n;
    cin>>n;

    /// if(n == 0) return 0; // Handle edge case of empty array.

    vector<int> v(n), seg(4 * n);
    for(int i=0; i < n; i++) cin>>v[i];

    build(0, 0, n - 1, v, seg);
    int q;
    cin>>q;
    while(q--) {
        int l, r;
        cin>>l>>r;

        /// If 1-based indexing is used:
        l--, r--;

        cout<<range_query(0, 0, n - 1, l, r, seg)<<endl;
    }

/// just when say query and update
    int n;
    cin>>n;

    /// if(n == 0) return 0; // Handle edge case of empty array.

    vector<int> v(n), seg(4 * n + 1);
    for(int i=0; i < n; i++) cin>>v[i];

    build(0, 0, n - 1, v, seg);
    int q;
    cin>>q;
    while(q--) {
        int type;
        cin>>type;

        if(type == 1) {
            int l, r;
            cin>>l>>r;

            /// If 1-based indexing is used:
             l--, r--;

            cout<<range_query(0, 0, n - 1, l, r, seg)<<endl;
        }
        else {
            int i, value;
            cin>>i>>value;

            /// If 1-based indexing is used:
            i--;

            update(0, 0, n - 1, i, value, seg);
            v[i] = value;
        }
    }

/// if two vector then construct two segment tree as simple
 build(0, 0, n - 1, v, seg);
 build(0, 0, n - 1, v2, seg2);
