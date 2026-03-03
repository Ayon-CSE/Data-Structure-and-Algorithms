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

///    X.insert(1);
///    X.insert(2);
///    X.insert(2);
///    X.insert(4);
///    X.insert(8);
///    X.insert(16);
///    1 2 4 8 16
///    cout<<*X.find_by_order(1)<<endl; // 2
///    cout<<*X.find_by_order(2)<<endl; // 2
///    cout<<*X.find_by_order(4)<<endl; // 8
///    cout<<(end(X)==X.find_by_order(6))<<endl; // true
//
///    cout<<X.order_of_key(-5)<<endl;  // 0
///    cout<<X.order_of_key(1)<<endl;   // 0
///    cout<<X.order_of_key(3)<<endl;   // 3
///    cout<<X.order_of_key(4)<<endl;   // 3
///    cout<<X.order_of_key(5)<<endl;   // 4
///    cout<<X.order_of_key(400)<<endl; // 6

/*******
complexity all in logn
s.find_by_order(i)->first for pair
*s.find_by_order(i) ith index from 0
s.order_of_key(k) values stricly less than k
s.erase(s.find_by_order(s.order_of_key(val))) only for the duplicate values and if the val containes in the set
s.size() - s.order_of_key(k) values greater equal than k
 ****************/

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
