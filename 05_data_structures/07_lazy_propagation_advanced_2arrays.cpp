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

const int N = 1e5 + 9;

struct node {
    int cnt[3];
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

    node cur = t[n];
    for(int i=0; i<3; i++) {
        t[n].cnt[(i + lazy[n]) % 3] = cur.cnt[i];
    }

    if (b != e) {
      lazy[lc] = (lazy[lc] + lazy[n]) % 3;
      lazy[rc] = (lazy[rc] + lazy[n]) % 3;
    }

    lazy[n] = 0;
  }

  node merge(node l, node r) {
      node ans;
      for(int i=0; i<3; i++) {
          ans.cnt[i] = l.cnt[i] + r.cnt[i];
      }
      return ans;
  }

  void pull(int n) {
      t[n] = merge(t[lc], t[rc]);
  }

  void build(int n, int b, int e) {
    lazy[n] = 0;

    if (b == e) {
      t[n].cnt[0] = 1;
      t[n].cnt[1] = 0;
      t[n].cnt[2] = 0;
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
      lazy[n] = (lazy[n] + v) % 3;
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

    if (i > e || b > j) {
        node empty;
        empty.cnt[0] = empty.cnt[1] = empty.cnt[2] = 0;
        return empty;
    }

    if (i <= b && e <= j) return t[n];

    int mid = (b + e) >> 1;

    return merge(query(lc, b, mid, i, j),
                 query(rc, mid + 1, e, i, j));
  }
} t;

void solve(int k) {
    cout<<"Case "<<k<<":\n";
    int n, q;
    cin>>n>>q;

    t.build(1, 0, n - 1);

    while(q--) {
        int x; cin>>x;

        if(x == 0) {
            int l, r; cin>>l>>r;
            t.upd(1, 0, n - 1, l, r, 1);
        }
        else {
            int l, r; cin>>l>>r;
            node ans = t.query(1, 0, n - 1, l, r);
            cout<<ans.cnt[0]<<endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1, k = 1;
    cin >> tc;
    while (tc--) {
        solve(k);
        k++;
    }

    return 0;
}
