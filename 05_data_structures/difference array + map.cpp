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

void solve(int cs) {
    cout<<"Case "<<cs<<": \n";
    int n, q;
    cin>>n>>q;

    map<int, int> mp;
    for(int i=0; i<n; i++) {
        int l, r; cin>>l>>r;
        mp[l]++;
        mp[r + 1]--;
    }

    int sum = 0;
    for(auto &[x, y] : mp) {
        sum += y;
        y = sum;/// prefix sum
    }

    for(int i=0; i<q; i++) {
        int x; cin>>x;
        auto it = mp.upper_bound(x);
        it--;
        cout<<it->second<<endl;
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
