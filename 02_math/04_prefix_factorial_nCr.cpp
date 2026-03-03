vector<ll> fact;
void preFact(int n) {
    fact.assign(n + 2, 1);

    for(int i=2; i<=n; i++) {
        fact[i] = (i * fact[i - 1]) % mod;
    }
}

/// ncr
ll nCr(int n, int r) {
    if (r > n) return 0;
    ll numerator = fact[n];
    ll denominator = modmul(fact[r], fact[n - r]);
    return modmul(numerator, modInverse(denominator));
}
