/// lcm to prevent overflow
int lcm(int n, int m, bool &ok) {
    int limit = (int)log10(n / __gcd(n, m));

    if(limit + (int)log10(m) > 18) {
        ok = false;
        return 1;
    }

    ok = true;
    return (n / __gcd(n, m)) * m;
}
