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

const int N = 3e5 + 9;

struct node {
    int mn, cnt;
};

int a[N];
struct ST {
  node t[4 * N];

  static const int inf = 1e18;
  ST() {
     for(int i=0; i <= 4 * N; i++) {
          t[i] = {inf, 0};
     }
  }

  node merge(node l, node r) {
      node ans = {inf, 0};

      ans.mn = min(l.mn, r.mn);

      if(ans.mn == l.mn) ans.cnt += l.cnt;
      if(ans.mn == r.mn) ans.cnt += r.cnt;

      return ans;
  }

  void build(int n, int b, int e) {
    if (b == e) {
      t[n] = {a[b], 1};
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]); // change this
  }
  void upd(int n, int b, int e, int i, int x) {
    if (b > i || e < i) return;
    if (b == e && b == i) {
      t[n] = {x, 1}; // update
      return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    upd(l, b, mid, i, x);
    upd(r, mid + 1, e, i, x);
    t[n] = merge(t[l], t[r]); // change this
  }
  node query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return {inf, 0}; // return appropriate value
    if (b >= i && e <= j) return t[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
  }
}t;

void solve() {
    int n, q;
    cin>>n>>q;

    for(int i=0; i<n; i++) cin>>a[i];

    t.build(1, 0, n - 1);

    while(q--) {
        int type;
        cin>>type;

        if(type == 1) {
            int i, v; cin>>i>>v;
            t.upd(1, 0, n - 1, i, v);
        }
        else {
            int l, r;
            cin>>l>>r;

            node ans = t.query(1, 0, n - 1, l, r - 1);
            cout<<ans.mn<<' '<<ans.cnt<<endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
