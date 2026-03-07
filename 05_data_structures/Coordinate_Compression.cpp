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

const int N = 1e6 + 9;
vector<int> a(N), b(N), q(N), cnt(N, 0);

void solve(int cs) {
    cout<<"Case "<<cs<<":\n";
    int n, m;
    cin>>n>>m;

    set<int> s;
    for(int i=0; i<n; i++) {
        cin>>a[i]>>b[i];
        s.insert(a[i]);
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

    /// coordinate compression
    /// suppose range like (1-6), (4-10)
    /// and to find 7 lies in how many segments
    /// answer is 1
    /// if i range to add +1 -->
    /// 1 2 3 4 5 6 7 8 9 10
    /// 1 1 1 2 2 2 1 1 1 1
    /// ans holo 7 er cnt 1, but value beshi boro upto 1e10
    /// karon eta 1e10 o porjonto hote pare but ei value vector e ana jabe na
    /// etake coordinate compression k korbo mane compressed
    /// so compressed kore n niye ashbo, total index
    /// 1 2 3 4 5
    /// 1 4 6 7 10
    /// (1-6) range +1 add kora mane (1-3) index e +1 add kora
    /// (4-10) range +1 add kora mane (2-5) index e +1 add kora
    /// 1 2 3 4 5
    /// 1 4 6 7 10
    /// 1 2 2 1 1
    /// taile 7 kotobar segment er vitor ache 1 bar, etai coordinate compression
    /// then all prefix sum optimized which is difference array
    /// cnt[l]++; cnt[r + 1]--;

    for(int i=0; i<n; i++) {
        a[i] = mp[a[i]];
        b[i] = mp[b[i]];

        /// difference array
        cnt[a[i]]++;
        cnt[b[i] + 1]--;
    }
    for(int i=0; i<m; i++) {
        q[i] = mp[q[i]];
    }

    for(int i=1; i<=id; i++) cnt[i] += cnt[i - 1];

    for(int i=0; i<m; i++) {
        cout<<cnt[q[i]]<<endl;
    }

    for(int i=1; i<=id; i++) cnt[i] = 0;
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
