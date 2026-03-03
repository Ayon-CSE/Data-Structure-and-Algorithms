/// Ascending
bool comp(pair<int, int> &a, pair<int, int> &b) {
    auto [x, y] = a;
    auto [x2, y2] = b;

    if(x == x2) return y < y2;
    return x < x2;
}
/// Descending
bool comp2(pair<int, int> &a, pair<int, int> &b) {
    auto [x, y] = a;
    auto [x2, y2] = b;

    if(x == x2) return y > y2;
    return x < x2;
}
