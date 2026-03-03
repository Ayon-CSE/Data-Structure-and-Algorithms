/// (sliding window) -> Longest subrarray with sum <= k (O(expand + shrink) = O(n + n))
    /// first e worst case/invalid case dhorte hobe
     sort(v.begin(), v.end());
    int l = 0, r = 0;
    ll max1 = 0, sum = 0;
    while(r < n) {
        sum += v[r].second;
        while(v[r].first - v[l].first >= d) {
            sum -= v[l].second;
            l++;
        }

        max1 = max(max1, sum);
        r++;
    }

    cout<<max1;
