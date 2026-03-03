/// when says exactly k, the idea is find all
/// subarrays <= k and then fun(v, k) - fun(v, k - 1)

class Solution {
public:
    int fun(vector<int> &v, int k) {
         int l = 0, r = 0, n = v.size(), sum = 0, ans = 0;
         map<int, int> mp;
         while(r < n) {
             mp[v[r]]++;

             while(mp.size() > k) {
                 mp[v[l]]--;
                 if(mp[v[l]] == 0) mp.erase(v[l]);
                 l++;
             }

             ans += r - l + 1;
             r++;
         }

         return ans;
    }

    int subarraysWithKDistinct(vector<int> &v, int k) {
         return fun(v, k) - fun(v, k - 1);
    }
};
