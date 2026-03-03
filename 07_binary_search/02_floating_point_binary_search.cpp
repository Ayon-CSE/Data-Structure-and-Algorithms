void floating_point_binary_search() {
        ld c;
        cin >> c;

        ld l = 0, r = 2e18, ans = -1;
        const ld eps = 1e-6;

        while (r - l > eps) { or for(int i=0; i<=100; i++) { }
            ld mid = l + (r - l) / 2;

            if (mid * mid + sqrtl(mid) >= c) {
                r = mid;
            } else {
                l = mid;
            }
        }

        cout << fixed << setprecision(20) << l;
