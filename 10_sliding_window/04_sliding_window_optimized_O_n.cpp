/// optimization only for max length O(n)
    ll sum = 0;
       /// Longest subrarray with sum <= k (O(expand + shrink) =O(n + n))
    int l = 0, r = 0, max_length = 0;
    /// r = expand, l = shrink
    while(r < n and l < n) {
       sum += v[r];
       if(sum > k) {/// invalid condition (shrink)
            sum -= v[l];
            l++;
        }

        if(sum <= k) {/// valid condition (expand)
            max_length = max(max_length, r - l + 1);
            /// to print subarray - > store l and r
            /// to print sum - > store max sum <= k
        }
        r++;
    }

    cout<<max_length;
