/// update with lazy propagation
void update(int index, int low, int high, int l, int r, ll value, vector<ll> &lazy, vector<ll> &seg) {
    /// update the previous remaining update
    /// and propagate downwards
    /// propagate(index, low, high, lazy, seg);
    if(lazy[index] != 0) {
        seg[index] += (high - low + 1) * lazy[index];
        /// when say flipped range binary bit
///        seg[index] = (high - low + 1) - seg[index];
        /// when say min or max
///        seg[index] += lazy[index];


        /// propogate the lazy update downwards
        /// for the remaining nodes to get updated
        if(low != high) {/// this is not leaf node
            lazy[2 * index + 1] += lazy[index];
            lazy[2 * index + 2] += lazy[index];
        }
        /// when say flipped range binary bit
///        if(low != high) {
///             lazy[2 * index + 1] = !lazy[2 * index + 1];
///             lazy[2 * index + 2] = !lazy[2 * index + 2];
///        }

        lazy[index] = 0;
    }

    /// no overlap
    /// we don't do anything and return
    /// low high l r or l r low high
    if(high < l or r < low) return;

    /// complete overlap
    /// l low high r
    if(low >= l and high <= r) {
        seg[index] += (high - low + 1) * value;
            /// when say flipped range binary bit
///        seg[index] = (high - low + 1) - value;
           /// when say min or max
///        seg[index] += value;

        /// if not leaf node, this will have children
        if(low != high) {
            lazy[2 * index + 1] += value;
            lazy[2 * index + 2] += value;
        }
       /// when say flipped range binary bit
///        if(low != high) {
///             lazy[2 * index + 1] = !lazy[2 * index + 1];
///             lazy[2 * index + 2] = !lazy[2 * index + 2];
///        }
        return;
    }

    /// partial overlap
    int mid = (low + high) >> 1;
    update(2 * index + 1, low, mid, l, r, value, lazy, seg);
    update(2 * index + 2, mid + 1, high, l, r, value, lazy, seg);

    seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
}

/// query with lazy propagation
ll query(int index, int low, int high, int l, int r, vector<ll> &lazy, vector<ll> &seg) {
    /// update the previous remaining update
    /// and propagate downwards
    /// propagate(index, low, high, lazy, seg);
    if(lazy[index] != 0) {
        seg[index] += (high - low + 1) * lazy[index];
        /// when say flipped range binary bit
///         seg[index] = (high - low + 1) - seg[index];
        /// when say min or max
///         seg[index] += lazy[index];

        /// propogate the lazy update downwards
        /// for the remaining nodes to get updated
        if(low != high) {/// this is not leaf node
            lazy[2 * index + 1] += lazy[index];
            lazy[2 * index + 2] += lazy[index];
        }
        /// when say flipped range binary bit
///        if(low != high) {
///             lazy[2 * index + 1] = !lazy[2 * index + 1];
///             lazy[2 * index + 2] = !lazy[2 * index + 2];
///        }

        lazy[index] = 0;
    }

    /// no overlap
    if(high < l or r < low) return 0;

    /// complete overlap
    if(low >= l and high <= r) return seg[index];

    ///partial overlap
    int mid = (low + high) >> 1;
    ll left = query(2 * index + 1, low, mid, l, r, lazy, seg);
    ll right = query(2 * index + 2, mid + 1, high, l, r, lazy, seg);
    return left + right;
}
