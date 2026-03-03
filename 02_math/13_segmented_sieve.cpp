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
