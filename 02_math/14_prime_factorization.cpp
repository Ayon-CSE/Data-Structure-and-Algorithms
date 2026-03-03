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
