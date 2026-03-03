/// binary exponentiation
ll power(ll base, ll pow, ll mod) {
    ll res = 1;

    while(pow) {
        if(pow%2) {
            res = (res * base) % mod;
            pow--;
        }
        else {
            base = (base * base) % mod;/// 2 4 8 16 32......
            pow /= 2;
        }
    }

   return res;
}
