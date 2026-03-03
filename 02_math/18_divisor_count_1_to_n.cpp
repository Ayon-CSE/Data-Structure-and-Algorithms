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
