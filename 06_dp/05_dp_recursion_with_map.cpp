void recursion_dp() -->

map<ll, ll> mp;

ll calc(ll n) {
    if(n == 1) {
        return 0;
    }
    else if(mp.find(n) != mp.end()) {
        return mp[n];
    }
    else {
       mp[n] = n + calc(n / 2) + calc((n + 1) / 2);
       return n + calc(n / 2) + calc((n + 1) / 2);
    }
  }
}
