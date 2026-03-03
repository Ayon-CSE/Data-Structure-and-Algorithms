/// lazy propagation -> ek node e 5 ta node er kaaj eksathe
const ll mod = 998244353;

void modnor(ll &x) {x %= mod; if(x < 0)(x += mod);}
ll modmul(ll x, ll y) { x %= mod, y %= mod; modnor(x),modnor(y); return (x*y)%mod; }
ll modadd(ll x, ll y) { x %= mod, y %= mod; modnor(x),modnor(y); return (x+y)%mod; }
ll modsub(ll x, ll y) { x %= mod, y %= mod; modnor(x),modnor(y); x -= y; modnor(x); return x; }
ll modpow(ll b, ll p) { ll r = 1; while(p) {if(p&1) r = modmul(r, b); b = modmul(b, b);p >>= 1;}return r;}
ll modinverse(ll x){return modpow(x,mod-2);}  /// if mod is prime.
ll moddiv(ll x, ll y){return modmul(x,modinverse(y));}

void build(int index, int low, int high, vector<ll> &a, vector<ll> &sega, vector<ll> &b, vector<ll> &segb, vector<ll> &seg) {
    if(low == high) {
        sega[index] = a[low];
        segb[index] = b[low];
        seg[index] = modmul(sega[index], segb[index]);
        return;
    }

    int mid = (high + low) >> 1;
    build(2 * index + 1, low, mid, a, sega, b, segb, seg);
    build(2 * index + 2, mid + 1, high, a, sega, b, segb, seg);

    sega[index] = modadd(sega[2 * index + 1], sega[2 * index + 2]);
    segb[index] = modadd(segb[2 * index + 1], segb[2 * index + 2]);
    seg[index] = modadd(seg[2 * index + 1], seg[2 * index + 2]);
}

void propagate(int index, int low, int high, vector<ll> &lazy, vector<ll> &lazy2, vector<ll> &sega, vector<ll> &segb, vector<ll> &seg) {
    if(lazy[index] != 0) {
        sega[index] = modadd(sega[index], modmul((high - low + 1), lazy[index]));
        seg[index] = modadd(seg[index], modmul(lazy[index], segb[index]));

        if(low != high) {
            lazy[2 * index + 1] = modadd(lazy[2 * index + 1], lazy[index]);
            lazy[2 * index + 2] = modadd(lazy[2 * index + 2], lazy[index]);
        }

        lazy[index] = 0;
    }

    if(lazy2[index] != 0) {
        segb[index] = modadd(segb[index], modmul((high - low + 1), lazy2[index]));
        seg[index] = modadd(seg[index], modmul(lazy2[index], sega[index]));

        if(low != high) {
            lazy2[2 * index + 1] = modadd(lazy2[2 * index + 1], lazy2[index]);
            lazy2[2 * index + 2] = modadd(lazy2[2 * index + 2], lazy2[index]);
        }

        lazy2[index] = 0;
    }
}

void update(int index, int low, int high, int l, int r, ll value, vector<ll> &lazy, vector<ll> &lazy2, vector<ll> &sega, vector<ll> &segb, vector<ll> &seg) {
    propagate(index, low, high, lazy, lazy2, sega, segb, seg);

    if(high < l or r < low) return;

    if(low >= l and high <= r) {
        sega[index] = modadd(sega[index], modmul((high - low + 1), value));
        seg[index] = modadd(seg[index], modmul(value, segb[index]));

        if(low != high) {
            lazy[2 * index + 1] = modadd(lazy[2 * index + 1], value);
            lazy[2 * index + 2] = modadd(lazy[2 * index + 2], value);
        }

        return;
    }

    int mid = (low + high) >> 1;
    update(2 * index + 1, low, mid, l, r, value, lazy, lazy2, sega, segb, seg);
    update(2 * index + 2, mid + 1, high, l, r, value, lazy, lazy2, sega, segb, seg);

    sega[index] = modadd(sega[2 * index + 1], sega[2 * index + 2]);
    seg[index] = modadd(seg[2 * index + 1], seg[2 * index + 2]);
}

void update2(int index, int low, int high, int l, int r, ll value, vector<ll> &lazy, vector<ll> &lazy2, vector<ll> &sega, vector<ll> &segb, vector<ll> &seg) {
    propagate(index, low, high, lazy, lazy2, sega, segb, seg);

    if(high < l or r < low) return;

    if(low >= l and high <= r) {
        segb[index] = modadd(segb[index], modmul((high - low + 1), value));
        seg[index] = modadd(seg[index], modmul(value, sega[index]));

        if(low != high) {
            lazy2[2 * index + 1] = modadd(lazy2[2 * index + 1], value);
            lazy2[2 * index + 2] = modadd(lazy2[2 * index + 2], value);
        }

        return;
    }

    int mid = (low + high) >> 1;
    update2(2 * index + 1, low, mid, l, r, value, lazy, lazy2, sega, segb, seg);
    update2(2 * index + 2, mid + 1, high, l, r, value, lazy, lazy2, sega, segb, seg);

    segb[index] = modadd(segb[2 * index + 1], segb[2 * index + 2]);
    seg[index] = modadd(seg[2 * index + 1], seg[2 * index + 2]);
}

ll query(int index, int low, int high, int l, int r, vector<ll> &lazy, vector<ll> &lazy2, vector<ll> &sega, vector<ll> &segb, vector<ll> &seg) {
    propagate(index, low, high, lazy, lazy2, sega, segb, seg);

    if(high < l or r < low) return 0;

    if(low >= l and high <= r) return seg[index];

    int mid = (low + high) >> 1;
    ll left = query(2 * index + 1, low, mid, l, r, lazy, lazy2, sega, segb, seg);
    ll right = query(2 * index + 2, mid + 1, high, l, r, lazy, lazy2, sega, segb, seg);

    return modadd(left, right);
}

    int n, q;
    cin >> n >> q;

    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<ll> sega(4 * n), segb(4 * n), seg(4 * n), lazy(4 * n), lazy2(4 * n);
    build(0, 0, n - 1, a, sega, b, segb, seg);

    while(q--) {
        int type;
        cin >> type;

        if(type == 1) {
            ll l, r, value;
            cin >> l >> r >> value;
            update(0, 0, n - 1, l - 1, r - 1, value, lazy, lazy2, sega, segb, seg);
        }
        else if(type == 2) {
            ll l, r, value;
            cin >> l >> r >> value;
            update2(0, 0, n - 1, l - 1, r - 1, value, lazy, lazy2, sega, segb, seg);
        }
        else {
            ll l, r;
            cin >> l >> r;
            cout << query(0, 0, n - 1, l - 1, r - 1, lazy, lazy2, sega, segb, seg) << '\n';
        }
    }

