/// corresponding represent set bits -> bitmask
2, 3 ->    1 1 0 0 - 12
0, 1, 2 -> 0 1 1 1 - 7
1, 3 ->    1 0 1 0 - 10
code : mask = mask | (1 << v[i]);
       c[i] = mask; /// 12

///find common of 2, 3 and 0, 1, 2
12 & 7 = 2
for(int i=0; i<30; i++) {
    for(int j=i + 1; j<30; j++) {
        int common = (c[i] & c[i + 1]);
        max1 = max(max1, __builtin_popcount(common));
    }
