/// Given an integer N, how many numbers less than or equal
/// N are there such that they are coprime to N?
/// A number X is coprime to N if gcd(X, N) = 1.
int eulerPhi ( int n ) {
    int res = n;
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
            }
            sqrtn = sqrt ( n );
            res /= prime[i];
            res *= prime[i] - 1;
            /*
                  n - (n / p)
               =  (p*n - n) / p
               =   (n * (p - 1)) / p;
            */
        }
    }
    if ( n != 1 ) {
        res /= n;
        res *= n - 1;
    }
    return res;
}
