/// Policy-based Data Structure
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

/// Ordered Set (Ascending Order)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

/// Ordered Set (Descending Order)
template <typename T>
using ordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

/// Ordered MultiSet (Ascending Order)
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

/// Ordered MultiSet (Descending Order)
template <typename T>
using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

    ordered_set<int> X;
    ordered_set<pair<int, int>> X;


/////////////////////////////////////////////////
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  o_set<int> se;
  se.insert(4);
  se.insert(2);
  se.insert(5);
  // sorted set se = [2, 4, 5]
  cout << se.order_of_key(5) << '\n'; // number of elements < 5
  cout << se.order_of_key(6) << '\n'; // number of elements < 6
  cout << (*se.find_by_order(1)) << '\n'; // if you imagine this as a 0-indexed vector, what is se[1]?
  return 0;
}

////////////////////////////////////////////////////////////////////////
/// implement pair ordered set
    ordered_pairset s;
    int n, q;
    cin>>n>>q;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        s.insert({v[i], i + 1});
    }

    while(q--) {
        char type;
        cin>>type;

        if(type == '!') {
            int i, value;
            cin>>i>>value;

            /// O(1)
            s.erase(s.find({v[i - 1], i}));
            v[i - 1] = value;
            s.insert({v[i - 1], i});
        }
        else {
            int l, r;
            cin>>l>>r;

            /// O(1)
            cout<<s.order_of_key({r + 1, -1}) - s.order_of_key({l, -1})<<'\n';
        }
    }
