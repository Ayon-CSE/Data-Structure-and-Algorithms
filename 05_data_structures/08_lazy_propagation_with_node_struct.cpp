/**
 *
 *   author: Ayon Das Gupta
 *
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define int long long

const int N = 1e5 + 9, inf = 1e18;
int a[N];

struct node {
    int sum, mn;
};

struct ST {
#define lc (n << 1)
#define rc ((n << 1) + 1)

  node t[4 * N];
  int lazy[4 * N];

  ST() {
    memset(lazy, 0, sizeof lazy);
  }

  void push(int n, int b, int e) {///change this
    if (lazy[n] == 0) return;

    t[n].sum = t[n].sum + lazy[n] * (e - b + 1);
    t[n].mn += lazy[n];

    if (b != e) {
      lazy[lc] += lazy[n];
      lazy[rc] += lazy[n];
    }

    lazy[n] = 0;
  }

  node merge(node l, node r) {///change this
      if(l.mn == inf) return r;
      if(r.mn == inf) return l;

      node ans = {0, inf};

      ans.sum = l.sum + r.sum;
      ans.mn = min(l.mn, r.mn);

      return ans;
  }

  void pull(int n) {
      t[n] = merge(t[lc], t[rc]);
  }

  void build(int n, int b, int e) {
    lazy[n] = 0;///change this

    if (b == e) {///change this
      t[n].sum = 0;
      t[n].mn = a[b];
      return;
    }

    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n);
  }

  void upd(int n, int b, int e, int i, int j, int v) {
    push(n, b, e);

    if (j < b || e < i) return;

    if (i <= b && e <= j) {
      lazy[n] += v;///change this
      push(n, b, e);
      return;
    }

    int mid = (b + e) >> 1;
    upd(lc, b, mid, i, j, v);
    upd(rc, mid + 1, e, i, j, v);

    pull(n);
  }

  node query(int n, int b, int e, int i, int j) {
    push(n, b, e);

    if (i > e || b > j) return {0, inf};///change this

    if (i <= b && e <= j) return t[n];

    int mid = (b + e) >> 1;

    return merge(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
  }
} t;

void solve() {
    int n, q;
    cin>>n>>q;

    t.build(1, 1, n);

    while(q--) {
        int type; cin>>type;

        if(type == 1) {
            int l, r, v; cin>>l>>r>>v;
            l++; r++;
            t.upd(1, 1, n, l, r - 1, v);
        }
        else {
            int l, r; cin>>l>>r;
            l++; r++;

            node ans = t.query(1, 1, n, l, r - 1);
            cout<<ans.mn<<endl;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    ///cin >> T;

    for(int tc = 1; tc <= T; tc++) {
        solve();
    }

    return 0;
}
