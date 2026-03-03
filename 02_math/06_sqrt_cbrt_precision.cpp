/// sqrt to prevent precision error (round o use kora jay)
int SQRT(int n) {
    int x = sqrt(n);
    while(x * x < n) x++;
    while(x * x > n) x--;

    return x;
}
/// cbrt to prevent precision error (round o use kora jay)
ll CBRT(ll x) {
    long long k = cbrtl(x);
    while (k * k * k < x) ++k;
    while (k * k * k > x) --k;

    return k;
}
