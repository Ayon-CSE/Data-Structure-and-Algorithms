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
const ll mod =  1e9 + 7;
const ll inf = (ll)1e18;
#define int long long int

const int N = (int)2e5 + 9;
int a[N];

struct ST {
  int t[4 * N];

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
    int n, q;
    cin>>n>>q;

    vector<int> pos(N);
    vector<vector<int>> cnt(N);
    for(int i=1; i<=n; i++) cin>>a[i], pos[a[i]] = i;

    for(int i=1; i<=n; i++) {
        int x = i;

        for(int j=x; j<=n; j += x) {
            int L = min(pos[x], pos[j]);
            int R = max(pos[x], pos[j]);
            cnt[R].push_back(L);
        }
    }

    vector<vector<pair<int, int>>> v(n + 9);
    for(int i=1; i<=q; i++) {
        int l, r;
        cin>>l>>r;

        /// r ke fix kore shob l rakha that is offline queries
        v[r].push_back({l, i});
    }

    vector<int> ans(q + 9);
    t.build(1, 1, n);
    for(int r=1; r<=n; r++) {
        /// offline er subidha
        /// amr right r niye matha betha nai
        /// right r er kichu ekhane include hobe na
        for(auto i : cnt[r]) {/// logn
            t.upd(1, 1, n, i, 1);
        }

        if((int)v[r].size()) {
            for(auto [l, i] : v[r]) {
                ans[i] = t.query(1, 1, n, l, r);
            }
        }
    }

    for(int i=1; i <= q; i++) cout<<ans[i]<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    ///cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
