/**
 *
 *   author: Ayon Das Gupta
 *
**/

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define int long long

const int N = 1e5 + 9;
int a[N];

struct node {
    int ones, zeros;
};

struct ST {
#define lc (n << 1)
#define rc ((n << 1) + 1)

  node t[4 * N];
  int lazy[4 * N];

  ST() {
    memset(lazy, 0, sizeof lazy);
  }

  void push(int n, int b, int e) {
    if (lazy[n] == 0) return;

    swap(t[n].ones, t[n].zeros);

    if (b != e) {
      lazy[lc] ^= 1;
      lazy[rc] ^= 1;
    }

    lazy[n] = 0;
  }

  node merge(node l, node r) {
      if(l.ones == -1) return r;
      if(r.ones == -1) return l;

      node ans;
      ans.ones = l.ones + r.ones;
      ans.zeros = l.zeros + r.zeros;
      return ans;
  }

  void pull(int n) {
      t[n] = merge(t[lc], t[rc]);
  }

  void build(int n, int b, int e) {
    lazy[n] = 0;

    if (b == e) {
      if(a[b] == 1) {
         t[n].ones = 1;
         t[n].zeros = 0;
      }
      else {
         t[n].ones = 0;
         t[n].zeros = 1;
      }
      return;
    }

    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n);
  }

  void upd(int n, int b, int e, int i, int j) {
    push(n, b, e);

    if (j < b || e < i) return;

    if (i <= b && e <= j) {
      lazy[n] = 1;
      push(n, b, e);
      return;
    }

    int mid = (b + e) >> 1;
    upd(lc, b, mid, i, j);
    upd(rc, mid + 1, e, i, j);

    pull(n);
  }

  node query(int n, int b, int e, int i, int j) {
    push(n, b, e);

    if (i > e || b > j) return {-1, -1};

    if (i <= b && e <= j) return t[n];

    int mid = (b + e) >> 1;

    return merge(query(lc, b, mid, i, j),query(rc, mid + 1, e, i, j));
  }
} t;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    for(int i = 0; i < n; i++) {
        a[i + 1] = s[i] - '0';
    }

    t.build(1, 1, n);

    int q;
    cin >> q;

    while(q--) {
        char c;
        cin >> c;

        if(c == 'I') {
            int l, r;
            cin >> l >> r;
            t.upd(1, 1, n, l, r);
        }
        else {
            int i;
            cin >> i;
            node ans = t.query(1, 1, n, i, i);
            cout << ans.ones << endl;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++) {
        cout << "Case " << tc << ":" << endl;
        solve();
    }

    return 0;
}
