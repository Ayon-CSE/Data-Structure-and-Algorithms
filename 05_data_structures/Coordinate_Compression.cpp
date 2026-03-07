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
vector<int> v(N), b(N), q(N);

int a[N];
struct ST {
  int t[4 * N];
  static const int inf = 1e9;
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

void solve(int cs) {
    cout<<"Case "<<cs<<":\n";
    int n, m;
    cin>>n>>m;

    set<int> s;
    for(int i=0; i<n; i++) {
        cin>>v[i]>>b[i];
        s.insert(v[i]);
        s.insert(b[i]);
    }

    for(int i=0; i<m; i++) {
        cin>>q[i];
        s.insert(q[i]);
    }

    map<int, int> mp;
    int id = 1;
    for(auto i : s) {
        mp[i] = id;  /// value upto 1e12
        id++;
    }

    for(int i=0; i<n; i++) {
        v[i] = mp[v[i]];
        b[i] = mp[b[i]];
    }
    for(int i=0; i<m; i++) {
        q[i] = mp[q[i]];
    }

    t.build(1, 1, id);
    for(int i=0; i<n; i++) {
        t.upd(1, 1, id, v[i], 1);
        t.upd(1, 1, id, b[i] + 1, -1);
    }

    for(int i=0; i<m; i++) {
        cout<<t.query(1, 1, id, 0, q[i])<<endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1, k = 1;
    cin >> t;
    while (t--) {
        solve(k);
        k++;
    }

    return 0;
}
