/// sliding window
    int l = 0, r = 0, min1 = INT_MAX;
    map<char, int> mp;
    while(l < n) {
        mp[s[l]]++;

        while(l - r + 1 >= k) {
            min1 = min(min1, mp['W']);
            mp[s[r]]--;
            r++;
        }

        l++;
    }

    cout<<min1<<'\n';
