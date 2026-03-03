/// If the first elements are equal, then sort by second element in increasing order.
 auto cmp1 = [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first || (a.first == b.first && a.second < b.second);
 };

 /// If the first elements are equal, then sort by second element decreasing order.
 auto cmp2 = [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first || (a.first == b.first && a.second > b.second);

 };

///auto cmp = [&](pair<ll,ll> &a, pair<ll,ll> &b) {
///             return (a.first+a.second > b.first+b.second);
///}; // semicolon must dewa lagbe
