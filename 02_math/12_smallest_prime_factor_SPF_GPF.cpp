/// smallest prime factor
const int N = 1e6 + 10;
vector<int> prime(N);

void pf() {
    for(int i=1; i<N; i++) prime[i] = i;

    for(int i=2; i<N; i++) {
        if(prime[i] == i) {
            for(int j=i + i; j<N; j += i) {
                prime[j] = i;/// prime[j] = min(prime[j], i);
            }
        }
    }
}

void segmented_sieve(int l, int r) {
     vector<int> v;///global iniatiaze korbo

     /// suppose l = 21, r = 30

     if(l == 1) l++;
     int max1 = r - l + 1;/// 30 - 21 + 1 = 10
     vector<int> ans(max1 + 1, 0);/// (11) 0 means prime

     /// 1 - 30 prime ->
     /// v -> {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}

     for(auto &i : v) {
         if(i * i <= r) { /// 2, 3, 5
            int g = (l / i) * i; /// (21 / 2) * 2 = 20
            if(g < l) g += i; /// (20 < 21) 20 += 2

            while(g <= r) { /// 22 <= 30
                if(g != i) { /// i mane prime
                    ans[g - l] = 1; /// true not prime, ans[22 - 21] = ans[1]
                }
                g += i; /// 22, 24, 26, 28, 30
            }
         }
     }

     for(int i=0; i<max1; i++) {
         if(ans[i] == 0) { /// prime
            cout<< i + l <<'\n'; /// 1 + 22 = 23
         }
     }
}

void PrimeFactorize(ll n) {
   vector<int> v;
   for(int i = 2; i * i <= n; i++) {
      int ans = 0;
       if(n % i == 0) {
          while(n % i ==0) {
             v.push_back(i);
             n /= i;
             ans++;
          }

         cout<<i<<"^"<<ans<<'\n';
       }
     }

     /// must prime number
     if(n > 1) {
         cout<<n<<"^"<<1<<'\n';
        v.push_back(n);
     }
     cout<<'\n';
}

/// using prime factorization
long long numberOfDivisors(long long num) {
    long long total = 1;
    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            do {
                e++;
                num /= i;
            } while (num % i == 0);
            total *= e + 1;
        }
    }
    if (num > 1) {
        total *= 2;
    }
    return total;
}

/// using prime factorization
long long SumOfDivisors(long long num) {
    long long total = 1;

    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            do {
                e++;
                num /= i;
            } while (num % i == 0);

            long long sum = 0, pow = 1;
            do {
                sum += pow;
                pow *= i;
            } while (e-- > 0);
            total *= sum;
        }
    }
    if (num > 1) {
        total *= (1 + num);
    }
    return total;
}

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

void number_of_divisors(int n) {
    vector<int> d;
    for(int i = 1; i * i <= n; ++i){
        if(n % i != 0){
            continue;
        }
        d.push_back(i);
        if(i != n / i) d.push_back(n / i);
    }
 }

 /// Divisor count for integers from 1 to n
 /// sum of divisor for integers from 1 to n
  int n = (int)1e6;
  vector<int> d(n + 5, 0);

  for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j += i) {/// nlogn(logn->harmonic)
         d[j]++;
         /// d[j] += i // for sum of divisors
       }
  }
  for (int i = 1; i <= n; i++) {
       cout << d[i] << ' ';
  }

/// Problem : You are given q = 10^6 queries. In each
/// query you need to find out the  prime factorization
/// of where n <= 1e6. how can you do that in 1 second?

/// Smallest Prime Factor(SPF)
const int N = 1e6 + 5;
vector<int> spf(N, INT_MAX), gpf(N, -1);
int spf[N];
int32_t main() {
  SPF
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
   for(int i=2; i <= N; i++) {
        if(spf[i] == i) {
            for(int j=i; j <= N; j += i) {
                spf[j] = min(spf[j], i);
                gpf[j] = max(gpf[j], i);
            }
        }
    }
  int q; cin >> q; // queries q <= 1e6
  while (q--) {
    int n; cin >> n; // find prime factorization of n <= 1e6
    vector<int> ans;
    while (n > 1) {
      ans.push_back(spf[n]);
      n /= spf[n];
    }
    for (auto x: ans) cout << x << ' '; cout << '\n';
  }
  return 0;
}


void solve() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        int x; cin>>x;
        cout<<spf[x]<<' '<<gpf[x]<<' ';
        vector<int> v;
        map<int, int> mp;

        while(x != 1) {
            mp[spf[x]]++;
            v.push_back(spf[x]);
            x /= spf[x];
        }
        /// distinct and total prime factors
        cout<<(int)mp.size()<<' '<<(int)v.size()<<' ';

        ll cnt = 1, total = 1;
        for(auto [a, b] : mp) {
            cnt *= (b + 1);

            ll pow = 1, sum = 0;
            while(b >= 0) {
                sum += pow;
                pow *= a;
                b--;
            }
            total *= sum;
        }

        /// num and sum of divisors
        cout<<cnt<<' '<<total<<endl;
    }
}
