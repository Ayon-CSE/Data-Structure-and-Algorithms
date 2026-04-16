/**
 *
 *   author: Ayon Das Gupta
 *
**/

#include <bits/stdc++.h>
#define endl '\n'
#define ki(x) cout << x << endl
#define debug(v) for (auto &i : v) { cout << i << ' '; } cout<<endl;
#define debug2(v) for (auto &[x, y] : v) { cout << x << ' ' << y << endl; } cout << endl;
using namespace std;
using ll = unsigned long long;
using ld = long double;
const int mod = 1e9 + 7;
const ll inf = (ll)1e18;
#define int long long int

const int N = 200000 + 9;

struct ST {
  int t[4 * N];
  ST() {
    memset(t, 0, sizeof t);
  }
  void build(int n, int b, int e) {
    if (b == e) {
      t[n] = 0;
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = 0; // change this
  }
  void upd(int n, int b, int e, int i, int x) {
    if (b > i || e < i) return;
    if (b == e && b == i) {
      t[n] += x; // update
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    upd(l, b, mid, i, x);
    upd(r, mid + 1, e, i, x);
    t[n] = t[l] + t[r]; // change this
  }
  int query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return 0; // return appropriate value
    if (b >= i && e <= j) return t[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j); // change this
  }
}t;

void solve() {
    int n; cin>>n;
    vector<int> v(n + 9), c;
    set<int> s;
    for(int i=1; i<=n; i++) cin>>v[i], s.insert(v[i]);

    for(auto i : s) c.push_back(i);
    map<int, int> mp;
    for(int i=0; i<(int)c.size(); i++) {
        mp[c[i]] = i + 1;
    }

    /// segment tree + coordinate compression
    /// segment tree index
    /// 2 3 6 8 10 (like value upto 1e12) setake compress 1e6 at most
    /// 1 2 3 4 5
    for(int i=1; i<=n; i++) {
        v[i] = mp[v[i]];
    }

    t.build(1, 1, n);
    int ans = 0;
    for(int i=n; i>=1; i--) {
        ans += t.query(1, 1, n, 1, v[i] - 1);
        t.upd(1, 1, n, v[i], 1);
    }

    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
