/// find 1 to n of all phi using sieve

    sieve();

    for(int i=2; i<= N - 5; i++) {
        int x = i, ans = 1;

        /// p^k - (p^k / p) -- gcd > 1
        /// p^k - (p^(k - 1))
        /// p ^ (k - 1) * (p - 1)
        /// ((p ^ k) / p) * (p - 1)
        while(x > 1) {
            int p = spf[x], k = 1;
            while(x % p == 0) {
                k *= p;
                x /= p;
            }
            k /= p;
            ans *= k * (p - 1);
        }

        /// 1 to n with gcd(i, n) = 1 means coprime with n
        phi[i] = ans;
        pref[i] = pref[i - 1] + (phi[i] * phi[i]);
    }
