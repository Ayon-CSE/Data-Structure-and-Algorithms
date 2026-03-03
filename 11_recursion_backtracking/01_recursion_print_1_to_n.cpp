/// recursion

/// 1 2 3 4 5
void fun(int i, int n) {
    if(i > n) return;
    cout<<i<<' ';
    fun(i + 1, n);
}
/// 5 4 3 2 1
void fun(int i, int n) {
    if(i > n) return;
    fun(i + 1, n);
    cout<<i<<' ';
}
