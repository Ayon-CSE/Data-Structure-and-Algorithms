    /// sliding window part 2
int fun(vector<int>& v, int goal) {
    int sum = 0, l = 0, r = 0, n = v.size(), ans = 0;
    while(r < n) {
         sum += v[r];

         while(sum > goal and l < n) {
              sum -= v[l];
              l++;
         }

         /// <= and > duitar ei check hocche
         ans += r - l + 1;
         r++;// 0, 1, 2, 3, 4
     }

    return ans;
}
