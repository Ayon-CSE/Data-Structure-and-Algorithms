int gethash(string s) {
    ll ans = 0, prime = 3, power = 1;

    for(int i=0; i<s.size(); i++) {
        ans = (ans + (s[i] * power) % mod) % mod;
        power = (power * prime) % mod;
    }

    return ans;
}

void substring_hash() {
    int n = s.size();
    vector<ll> v(n + 5);
    ll prime = 7;
    for(int i=0; i<n; i++) {
        v[i + 1] = (v[i] * prime) % mod + s[i];
    }

    int q;
    cin>>q;
    while(q--) {
        int l, r;
        cin>>l>>r;

        int sz = r - l + 1;///substring length
        ll ans = power(prime, sz, mod);
        cout<<v[r] - ((v[l - 1] * ans) % mod)<<endl;
    }
}
