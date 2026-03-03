int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
///  binary search,prefix sum,sliding window,kadane's algorithm
///  brute force,recursion
///  reverse array te chinta
///  n - something / n - i,  max,min chinta
///  number theory(sieve,prime,power,divisor)
///  if(mp.find(v[i]]) != mp.end()) {} , s.erase(*s.begin()); / s.erase(value);
///  substring search -> s.find("101") != -1
///  mathay kichu na ashle even, odd check
///  soja i,, ulta n - i,, two pointer approach
///  v[i] -- ans[i] / ans[v[i].second]
///  stack(dex),queue,deque use kore pop kora - log(n) time
///  directional Array
///  vector<int> dx = {-1,-1,1,1,1,1,-1,-1};//first priority
///  vector<int> dy = {-1,1,1,-1,1,-1,1,-1};//second priority
///  map<int, vector<int>> mp;  mp[x].push_back(i);
///  i.second[i.second.size() - 1] / i.second.back() ,,,  i.second[0] / i.second.front()
///  vector<int> v[2];  v[x % 2].push_back(x);
///  vector <int> v[sz];  v[x].push_back(i);
///  mp.find(2) != mp.end() {}
///  find(v.begin(), v.end(), 2) == v.end() {}
///  pop_front() er kaaj pop_back diye kora jay reverse ulta traverse kore
///  update -> if - if,, if - else if
///  s='R' + s + 'R';
///  set bolte gele - sz = mp.size();
///  if(s.find(":)") != -1 and s.find(":(") != -1)
///  int mn = min({a, b, c});
///  input er age
/// for (int i = 0; i < n + 5; i++)
///    for (int j = 0; j < m + 5; j++)
///       arr[i][j] = 0;
///   vector<bool> used(n + 1, false);
///   while(x > n or !used[x])  x /= 2;
///      if(x > 0 and x <= n) {
///          used[x] = true;
///          ans++;
///       }
///   prefix sum -> partial_sum(v.begin(), v.end(), v.begin());
///   priority_queue<int, vector<int>, greater<int> > v; -> choto theke boro
///   map<string, bool> mp;  mp[v[i]] = true;
///    for(int j=1; j<n; j++) {
///        string ans = s.substr(0, j);
///        string ans2 = s.substr(j);
///    }
///  if(d.count(s.substr(0, j)) == 1 and d.count(s.substr(j)) == 1)
///  if(mp.count(s.substr(0, j)) == 1)
///  s += 'W'; for(int i=0; i<=n; i++) {}
///  int ans = 0; if(s[i] == 'B') ans |= 1; if(s[i] == 'R') ans |= 2;
///  int(count(s.begin(), s.end(), 'W')) == n
///  mp[x] = i;  if(mp[x]) {}
///  cin.ignore(); getline(cin, s);
///  getline(cin, s);
///  getline(cin, s);
///  int k = s[i] - 'a'; ch = digit + 'a';
///  two pointer approach ->
///    while(i < n and j < m) {
///        if(v[i] - k > v2[j]) {
///           j++;
///        }
///        else if(v[i] + k < v2[j]) {
///            i++;
///        }
///        else if(v2[j] >= v[i] - k and v2[j] <= v[i] + k) ans++, i++, j++;
///     }
///  two pointer approach -> (ekta boro, ekta choto)
///     sort(v.begin(), v.end());
///     int ans = 0, l = 0, r = n - 1;
///
///     while(l <= r) {
///         if(v[l] + v[r] <= k) ans++, l++, r--;
///         else ans++, r--;
///     }
///  4 pointer approach ->
///     sort(v.begin(), v.end());
///     sort(c.rbegin(),c.rend());
///
///     int i_n = 0, j_n = n - 1, i_m = 0, j_m = m - 1;
///     ll sum = 0;
///     while(i_n <= j_n) {
///        ll max1 = llabs(v[i_n] - c[i_m]);
///        ll max2 = llabs(v[j_n] - c[j_m]);
///
///        if(max1 > max2) {
///            i_n++;
///            i_m++;
///        }
///        else {
///           j_n--;
///           j_m--;
///        }
///
///        sum += max(max1, max2);
///     }
///   decimal to binary -->
///   vector<int> v;
///   while(n) {
///         v.push_back(n % 2);
///         n /= 2;
///         count++;
///   }
///   binary to decimal --->
///   reverse(v.begin(), v.end());
///   int k = 0;
///   ll sum = 0;
///   for(int i=0; i<v.size(); i++) {
///      if(v[i] == 1) sum += 1ll<<k;
///      k++;
///   }
///    cout<<sum<<'\n';
///    power of 2 or log2 base -> __lg(n) or 1LL << log2(n)
///    __builtin_clz(n) -> leading zeros of n in 32 bits
///    __builtin_popcount(n) -> count of set(1) bit
///    multiset<int> s;
///    auto it = s.upper_bound(x);  it--;  cout<<*it;
///    s.erase(it); if(it == s.end()) cout<<-1;
///    deque<int> v(n); sort(v.begin(), v.end());
///    for (int i=0; i<n; i++) {
///        cin >> v[i];
///    }
///    if(v[pos] == x),,, v.erase(v.begin() + pos);
///    vector<pair<int, bool>> g(m);
///    cin>>g[i].first; g[i].second = true;
///    if(abs(b[i] - g[j].first) <= 1 and g[j].second) {
///        count++;
///        g[j].second = false;
///        break;
///    }
///     sort(b.begin(), b.end());
///     sort(g.begin(), g.end());
///
///     int count = 0, k = 0;
///     for(int i=0; i<n; i++) {
///        for(int j=k; j<m; j++) {
///           if(abs(b[i] - g[j]) <= 1) {
///              count++;
///              k = j + 1;
///              break;
///           }
///        }
///     }
///  map<int, ll> mp;
///  non-degenerate triangle -> a + b > c and a - b < c
///  3 length of a triangle - nC3 or (k * (k - 1)*(k - 2)) / 6
///  2 length of a triangle - nc2 or (k * (k - 1)) / 2
///  non-degenerate triangle -> 3 4 5, 4 4 5(2 pow) not
///  int to long long ->  k * 1LL or 1LL * k
///  max(0, --x);
///  x - or (2 ta same hole 0) --> v[i] ^= 1;
///  int(count(c.begin(), c.end(), 1))
///  string s;  cout<<s[n - 1];
///  for(int i=0; i<n; i++) { /// O(n ^ 3)
///    for(int j=i + 1; j<n; j++) {
///       for(int k = j + 1; k<n; k++) {
///          if(i + j + k == n) {
///              ans = something;
///          }
///       }
///    }
///  }
///  if(s[i] > 'a') s[j]--; s[j] != 'a'; s[s.size() - 1] = 'z'
///  state = 0;  if(state == 0) state = 1; if(state == 1) state = 2;
///  for(i=0; i<n; i++) {
///        if(s[i] == t[l]) {
///            l++;
///        }
///        else {
///             ans++;
///
///             while(s[i] != t[l] and i < n) i++;
///             i--;
///        }
///     }
///  string k, k2; if(k + k2 == "Keyence")
///  string k = s.substr(0, i) + s.substr(j);
///  char c;  string s = c + s;
///  for(int j=0; j<k; j++) cout<j + 65;
///  char c = 'a';  s += c++; s += (i + 97);
///  if(x > 'a' and x < 'z') { }
///   1 2 3 6 9
///  *lower_bound(v.begin(), v.end(), 4) = 6
///  *upper_bound(v.begin(), v.end(), 4) = 6
///   1 2 3 6 9
///  *lower_bound(v.begin(), v.end(), 3) = 3
///  *upper_bound(v.begin(), v.end(), 3) = 6
///  for(auto i = v.rbegin(); i != v.rend(); i++) {}
///  map<int, vector<int>> mp;  mp[v[i] % m].push_back(v[i]);
///  for(auto &i : mp) { if(i.second.size() >= k) {
///  for(int j=0; j<k; j++) cout<<i.second[j]<<' ';
///  vector<int> v[m]; or vector<vector<int, int>> v(m);
///  v[x % m].push_back(x);  if(v[i].size() >= k) {
///  for(int j=0; j<k; j++) cout<<v[i][j]<<' ';
///  odd + odd (even numbers time add) -> even
///  x%3 -> 0, 1, 2 ..... (3 - 1) = 2
///  int cnt[100002] = {0};  cnt[v[i] % m]++;
///  for(int i=0; i<100002; i++)  if(cnt[i] >= k) { }
///     vector<pair<int, int>> v(n);
///     for(int i=0; i<n; i++) {
///          v[i] = {a[i], b[i]};
///      }
///   1 reverse front,,another reverse back ebave...
///   bool ok = true; ok ^= 1;(toggle) ok = true,ok = false
///   circular rotation -> deque
///   12 / 2 = 6,, 12 - 6 = 6
///   13 / 2 = 6,, 13 - 6 = 7 (remain = n - baki)
///   string ques = "abcdefghijklmnopqrstuvwxyz";
///   s[i] = ((s[i] - 'a' + 1) % 26) + 'a' - 1 + n; // n = shift
///   if(s[i] - (n % 26) >= 97) s[i] -= (n % 26);
///   else s[i] = s[i] - (n % 26) + 26;
///   if(s[i] + (n % 26) <= 122) s[i] += (n % 26);
///   else s[i] = s[i] + (n % 26) - 26;
///   n = 1e9 hole test case er baire niye khela, formula(O(1)), sieve(log(n)) approach
///   n = 1e5 hole O(nlog(n)), O(n*sqrt(n)), O(n)
///   int tmp = v[k2];
///   v.erase(v.begin() + k2);
///   v.push_back(tmp);
///
///   int tmp2 = v[k];
///   v.erase(v.begin() + k);
///   v.push_front(tmp);
///  ans[0] = a[p]; ans[n - 1] = a[q];
///  vector<int> done(n + 1, 0); done[p] = 1; done[q] = 1;
///  vector<string> s(n); for(int i=0; i<8; i++) cin>>s[i]; s[i][j] == 'A';
///  vector<vector<char>> v(9, vector<char> (9, '.'));
///  ll sum = accumulate(ans.begin(), ans.end(), 0LL);
///  v.erase(find(v.begin(), v.end(), *min_element(v.begin(), v.end())));
///  v.erase(find(v.begin(), v.end(), 10));
///  v.erase(v.begin() + i);
///  s.erase(i); s.erase(value);
///  map<char, set<int> > mp;    mp[s[i]].insert(i);
///  for(auto &i : mp) for(auto &x : i.second) {}
///  reverse(v.begin() + i, v.end());
///  for(int i=0; i<n; i++) v[i] = i + 1;
///  auto it = s.upper_bound(l); if(*it > r or it == s.end())
///  map<ll,ll> mp;   mp[n - 1] = -1;   mp[i] = i + 2;    mp[i] = mp[i + 1];
///  upper_bound(v.begin(),v.end(), v[x]) - v.begin()
///  if(s[i] > 90) s[i] -= 26;
///  n^2 ---> nlogn (map, set, vector, lower_bound, upper_bound, stack, queue, pririty queue);
///  *it (value-> auto it = lower_bound(pref.begin(), pref.end(), x);
///  (pos -> int ans = lower_bound(pref.begin(),pref.end(), x) - pref.begin();
///  cout<<ans;
///  value(*it) -> auto it = s.lower_bound(l); mp.lower_bound(l);
///  vector<int> ans[n];  ans[i].push_back(x);
///  test case er baire niye khela -->
///  int cnt[200005] = {0}; for(int i=1; i<=200000; i++) { cnt[i] = something; or cnt[i]++; }
///  int cnt[2] = {0}; cnt[a[i] % 2]++;
///  ms.erase(ms.find(2))
///  multiset<int> s; s.insert(x); auto it = s.lower_bound(x);  if(it == s.end()) cout<<-1; else cout<<*it;
///  vector e khela -->
///  if(v[i] == 1 and v[i + 2] == 1) { v[i + 1] = 1; }  int(count(v.begin(), v.end(), 1));
///  vector<int> v(26); for(int i=0; i<26; i++) v[i] = i;
///  int x = c - 97; if(v[i] == x) { v[i] = y; }
///  vector<int> v(101);  v[x] = i + 1;/// v[2] = 1; v[1] = 2, v[3] = 3;
///  common divisors berween two numbers -> int n = __gcd(a, b);
///  power er khela --> for(ll i = 1; i<=n; i *= a) or powl(i, a) or while(n) { n /= 2; count++; }
///  pow(i, 2) or while(n){ n /= 2; count++; }
///  1  6  2  5  3  4  or  1  4  2  5  3  6  or  1  6  5  4  3  2  or  6  1  2  3  4  5
///  (n * (n + 1)) / 2,  (n * (n - 1)) / 2
///  *  /  %  -->  (left to right) jabe
///	    while(n) {
///	        sum += n % 10;
///	        n /= 10;
///	    }
///  row fixed, column change
///  for(int i=0; i<N; i++) {
///     for(int j=0; j<M; j++) {
///         sum += A[i][j];
///     }
///  }
///  column fixed, row change
///  for(int i=0; i<M; i++) {
///      for(int j=0; j<N; j++) {
///          sum += A[j][i];
///       }
///   }
/// vector<bool> track(256, false); track[s[i]] = true; if(!track[s[i]])
/// string s;  s += s2[i]; -> O(n), s.push_back(s2[i]) -> O(1)
/// local array max sixe 2e6, global array max size 2e7
/// if(even.size() > odd.size()) swap(even, odd); /// even choto, odd boro
/// while(even.size()) { cout<<odd.back()<<' '; odd.pop_back(); cout<<even.back()<<' '; even.pop_back(); }
/// if(odd.size() > 0) cout<<odd.back()<<'\n';
/// int k = 0; for(int i=0; i<n; i += 2) ans[i] = k++; for(int i=1; i<n; i += 2) ans[i] = k++;
/// auto it = st.begin(); int x1 = *it; ++it;    int x2 = *it; ++it;    int x3 = *it;  ++it;
/// int p = ans[1] - ans[0];   for(int i=1; i<ans.size(); i++) {  ok &= (ans[i] - ans[i - 1] == p); }
/// if(*s.begin() + *s.rbegin() == 2 * *next(s.begin())) cout<<"YES";
/// map<int, bool> mp; mp[v[i]] = true;  if(!mp[v[i]])
/// int a[10]; --> xtra 0 thakbe na cz this is array, not vector
/// a[0] = v[0];   int k = 1; for(int i=1; i<n; i++) { a[k] = v[i]; k++; }   for(int i=0; i<k; i++) cout<<a[i]<<' ';
/// vector<int> v(n + 1);  sort(v.begin() + 1, v.end());  vector<int> vv = {v[1], v[n - 1], v[2], v[n], v[1]};
/// for(int i=0;i<n;i++) { for(int j=0;j<n;j++) { if(i == j) continue; } }
/// while(next_permutation(v.begin(), v.end())) { } ---> v.size() !(factorial) ta ashbe
/// vector<int> v(4);  for(int i = 0; i < 4; i++) { ans += abs(v[i] - v[(i + 1) % 4]);  }
/// reverse(v.begin(), v.end());  for(int i=1; i<=n; i++) { suff[i] = suff[i - 1] + v[i - 1]; }
/// find mex --> set<int> s; s.insert(v[i]); int mex = 0;  while(s.find(mex) != s.end()) mex++;  pref[i] = mex; reverse(suff.begin(), suff.end()) if(pref[i] == suff[i + 1]) { ok = true; break; }
/// lexicography smallest -> min(s, s2); ---> 2 ta string er je first char differ korbe,, jetar small compare than other,, setai smallest
/// int w = 1, b = 0;  if(j % 2 == w) v[i][j] = 'W';  else v[i][j] = 'B';    swap(w, b);
/// string s = "BW"; string s2; s2[j] = s[i % 2 == j % 2];
/// cin>>n>>m;  for(int i=0; i<n; i++) {  string s; cin>>s;  for(int j=0; j<s.size(); j++) {  if((i + j) % 2 == 0) cout<<'B'; else cout<<'W';   }  cout<<'\n'; }
/// vector<char> s(m + 1, 'B');  for(int i=1; i<=m; i+=2) s[i] = 'W';   int k = i % 2;    for(int j=k; j<m + k; j++) {
/// another toggle -->  k = k * -1; // 1, -1, 1, -1, 1, -1
/// min jodi 1 ta hoy tahole ok,, min onkgula hobe jeta not divisible setao ok like 5 2 2 2 2 2
/// int d = 0, for(int i=0; i<n; i++) d = gcd(d, v[i]);
/// ll limit = 1e9;  ll l = 1, r = limit, ans;  while(l <= r) { ll mid = (l + r) / 2;  if(sum <= x) { l = mid + 1; ans = mid; } else if(sum > x) r = mid - 1; }
/// MEX -> int l = 0; set<int> s; s.insert(v[i]); while(s.count(l)) l++; / while(s.find(l) != s.end()) l++;
/// vector<int> v(n);  auto it = find(v.begin(), v.end(), x);  v.insert(it + 1, y)//(pos, element);  v.erase(it);
/// if(s.find(x) != s.end()) / if(s.count(x))
/// if(s.find(x) == s.end()) / if(s.count(x) == 0)
/// auto it = s.lower_bound(x);  auto it2 = s.upper_bound(x);  if(it == it2) cout<<"No";
/// for(int i=0; i<n; i++) {  if((s[i] == 'm' and s[i + 1] == 'a' and s[i + 2] == 'p') ok = true; }
/// kadane's algorithm -> if(curr < 0) curr = 0; naile update curr and max1 ,, - kkhno hobei na karon empty subarray teo ans 0 hobe
/// ll count = 0, sum = 0;   for(int i = index + 1; i < n; i++) {   if(s[i] == '.') count++;   else sum += count; } }
/// char prev = s[0];  if(s[i] == prev) { count++; max1 = max(max1, count); } else { count = 1; }   prev = s[i];
/// make lexicographically Smallest Palindrome ->  int l = 0, r = s.size() - 1; while(l < r) { char ans = min(s[l], s[r]);  s[l] = ans;  s[r] = ans; l++; r--; }
/// minimum in pair -->  sort(v.begin(), v.end());  for(int i=0; i<n); i += 2) sum += v[i];
/// greedy solution -> priority_queue<int> v;   v.push(i.second);  int top = v.top();  v.pop();
/// priority_queue<pair<int, int>> q;   for (auto [x, y] : v) {  q.push({y, x}); }
/// vector<int> missing;  for(int i=1; i<=n; i++) { if(s.find(i) == s.end()) {  missing.push_back(i); } }
/// sort(v.begin(), v.end());  int k = 0;  for(int i=0; i<n; i++) {  if(v[i].first == v[i + 1].first and i < n - 1) { ans[v[i].second] = v[i].first;  ans2[v[i].second] = missing[k];  i++; k++; } else { ans[v[i].second] = v[i].first; }
/// auto rev = s[i]; reverse(rev.begin(), rev.end());
/// set<string> track; if(track.find(s[i]) == track.end()) {  track.insert(rev); }
/// upto k -> full k nibo,, hoy choto theke boro , nahole boro theke choto(greedy)
/// contiguous subarray(possibly empty) - kadane
/// kadane - > ll max1 = 0, sum = 0; for(int i=0; i<n; i++) { sum += v[i]; max1 = max(max1, sum);  if(sum < 0) { sum = 0; }
/// while(k > 0) { max1 *= 2; max1 %= modu; k--; }
/// ll modu = 1e9 + 7;  if(max1 + tmp >= 0) cout<<(max1 + tmp) % modu<<'\n';  else cout<<max1 + tmp + modu<<'\n';
/// only swap two adjacent,, only even-odd number swap,, only even-even swap, odd-odd swap,,  sort the array easy!
/// int prev = v[0];  for(int i=0; i<n; i++) { if(v[i] == prev) { cnt++; max1 = max(max1, cnt); }  prev = v[i] }
/// prev = v[n - 1];  for(int i=n - 1; i>=0; i--) {  if(v[i] == prev) { cnt++; max1 = max(max1, cnt); }  prev = v[i] }
///  5  10  4  9  3  8  2  7  1  6    or    10  5  9  4  8  3  7  2  6  1
///  2 4 6 8 10   7    9 5 3 1
///  for(int i=0; i<v.size() - 1; i++) { if((abs(tmp - v[i]) >= 2 and abs(tmp - v[i]) <= 4) and (abs(tmp - v[i + 1]) >= 2 and abs(tmp - v[i + 1]) <= 4)) {   l = i; break; }  for(int i=0; i<=l; i++) cout<<v[i]<<' ';   cout<<tmp<<' ';   for(int i=l + 1; i<v.size(); i++) cout<<v[i]<<' ';
///  formula ->  cout<<max(n, m) * max(n, m) - (min(n, m) - 1);
///  while(n > 0) { for(int i=1; i<v.size(); i++) { ans.push_back(v[i] + v[i - 1]); } v = ans; ans.clear(); n--; }
///  ans[temp[i]] = i % k + 1; /////1 2 3 1 2 3 1 2 3
///  vector<int> ans(n, 0); map<int, vector<int>> mp; mp[x].push_back(i); if(i.second.size() >= k) { ans[i.second[j]] = c; }
///  vector<int> ans(n, 0); map<int, set<int>> mp; mp[x].insert(i); if(i.second.size() >= k) {  for(auto &x : i.second) { ans[x] = c; } }
///  int l = int(temp.size()) - (int(temp.size()) % k); //// 11 - (11%3) = 11 - 2 = 9
///  int c = 1; bool ok = false; for(auto &x : i.second) { ans[x] = c; if(c < k and !ok) c++; else ok = true; if(ok) c = 0; }  or  vector<int> ans(n, 0);  for(int i=0; i<k; i++) { ans[i.second[j]] = c; }
///  log(n) another tricks -->  sort(v.begin(), v.end()); for(int i=0; i<n; i++) { for(int j=i + 1; j<n; j++) {  if(v[i].first * v[j].first >= 2 * n) break; } }
///  vector<ll> c(n + 2); for(int i=1; i<=n; i++) c[i] += c[i - 1];
///  sweep line technique ->  vector<int> c(n + 2);  while(q--) { int l, r, x;  c[l] += x;  c[r + 1] -= x; }  for(int i=1; i<=n; i++) c[i] += c[i - 1]; then initial array + c array
///  vector<int> pref(n), suff(n);  int z = 0;   for(int i=0; i<n; i++) {  if(s[i] == '0') z++; pref[i] = z; }   int o = 0;   reverse(s.begin(), s.end());  for(int i=0; i<n; i++) {  if(s[i] == '1') o++;  suff[i] = o; }   reverse(suff.begin(), suff.end());  for(int i=0; i<n - 1; i++) {  max1 = max(max1, pref[i] + suff[i + 1]); }
///  pref[0] = (s[i] == '0');  sufff[n - 1] = (s[i] == '1');
///  prefix xor ->  vector<ll> pref(n + 1);  for(int i=1; i<=n; i++) { pref[i] = pref[i - 1] ^ arr[i - 1]; } for(int i=0; i<queries.size(); i++) { cout<<pref[r] ^ pref[l - 1]<<'\n'; }
///  prefix max ->  for(int i=0; i<n; i++) {  max1 = max(max1, v[i]); ans[i] = v[i] + max1; }   for(int i=1; i<ans.size(); i++) { ans[i] += ans[i - 1]; }
///  prefix set ->  for(int i=0; i<n; i++) {  s.insert(v[i]; ans[i] = s.size(); }   for(int i=1; i<ans.size(); i++) { ans[i] += ans[i - 1]; }
///  a ^ a = 0,, 0 ^ a = a,,
///  find MEX -> vector<bool> visited(n, false); int mex = 0; for(int i=0; i<n; i++) {  visited[v[i]] = true;  while(visited[mex]) ++mex;
///  set<int> s; *s.begin(), *s.rbegin(), ,, *mp.begin()
///  greedy ->  if(m >= e) {  sort(v.begin(), v.end()); cout<<v[0] * e<<'\n'; }
///  greedy ->  upto m / no more than m --->  sort(v.begin(), v.end())  for(int i=0; i<n; i++) {  if(e >= m) {  sum += (v[i] + tmp) * m;  e -= m; }  else if(e < m) { sum += (v[i] + tmp) * e; break; }
///  vector<int> pref(n + 1); for(int i=n; i>0; i--) {  min1 = min(min1, i - v[i]); pref[i] = min1; }  pref.push_back(INT_MAX);  int ans = 0;  for(int i=1; i<=n; i++) { if(i < pref[i + 1]) ans++; }
///  vector<pair<ll, char>> ans;  for(auto &i : mp) { ans.push_back({i.second, i.first}); } sort(ans.rbegin(), ans.rend());   vector<char> track(256, false); for(int i=0; i<ans.size(); i++) { track[ans[i].second] = true; }
///  sort(v.rbegin(), v.rend()); while(v.size() and v.back() <= k) { k -= v.back(); v.pop_back(); }  cout<<v.size();
///  int ans = n;  for(int i=0; i<n; i++) { if(k == 0) break;  if(k >= something) { k -= something; ans--; } else break; }
///  priority_queue<ll> pq; pq.push(-y/x); --> choto theke boro,,  while(!pq.empty() && -pq.top() <= k){ k + = pq.top();// - value,, pq.pop(); cnt--; } cout<<cnt<<'\n';
///  13 - 4 = 9,, 9 - 4 = 5,, 5 - 4 = 1 (3 ta operation)  13 / 4 = 3 (same 3 ta operation)
///  for(int i=1; i<pref.size() - 1; i++) { if(v[i - 1] == 0) { pref[i] = pref[i - 1]; } else pref[i] = pref[i - 1] ^ 1; }
///  2D array magic ->  for (int i = 0; i < n * n; i++) {  b[i] = a[0] + i / n(row) * c + i % n(col) * d; }
///  s.erase(s.find(v[i]));
///  vector<ll> x(n + 2, 0);  for(int i=n; i>=1; i--) { sum += x[i + 1]; }
///  pair sum -> multiset<int> s;  s.insert(v[i]);  for(int i=0; i<n; i++) { s.erase(s.find(v[i])); if(s.find(k - v[i]) != s.end()) { ok = true; break; }
///  max subarray sum -> sliding window,, for(int i=0; i<K; i++) { sum += Arr[i]; }  --K; long max1 = sum;   for(int i=0; K<N - 1; i++) { sum -= Arr[i]; ++K; sum += Arr[K]; max1 = max(max1, sum); }
///  gcd 1 different value ashbe -> min1 + abs(pos - k) // pos - min element pos, k = any position
///  greedy strategy ->  map<int, int> mp; sort(v.rbegin(), v.rend()); for(int i=0; i<k; i++) mp[v[i]]++; priority_queue<int> pq; for(auto &i : mp) pq.push(i.second);  while(pq.size() > 1) {  int a = pq.top(); pq.pop();(top pop) int b = pq.top();  pq.pop(); a--; b--; if(a > 0) pq.push(a); if(b > 0) pq.push(b); }
///  erase any digit and add to the right -> int k = 0, erase = 0, match = 0; while(k < s.size() and match < tmp.size()) {  if(s[k] == tmp[match]) { match++; k++; } else { erase++; k++; } }
///  prefix sum of set bits --> for (int i = 1; i < 200005; i++) { for (int k = 0; k < 20; k++) { a[i][k] = a[i - 1][k] + (i >> k & 1); } }
///  sort(v.begin(), v.end());  int mid = (n + 1) / 2;
///  all set bits -> 1 3 7 15 31 63 ... int x = (1 << log2(k + 1)) - 1;
///  all set bits -> 1 3 7 15 31 63 ...  ll N = 1, pref = 0;  vector<ll> ans; while(N <= 1e9) { pref += N; ans.push_back(pref); N *= 2; }
///  stack<pair<int, int>> s; s.push({v[i], i + 1}); s.top().first, s.top().second
///  (globally)vector<int> cnt[26]; cnt[s[i] - 'a'].push_back(i); for(int i=25; i>=0; i--) {  if(cnt[i].size()) { for(int j=0; j<cnt[i].size(); j++) { cnt[i][j] };
///  v[lower_bound(v.begin(), v.end(), 1) - v.begin()]
///  lexicography greater than target but smallest --> v[upper_bound(v.begin(), v.end(), 1) - v.begin()]
///  jei element er lower bound / upper bound ber korbo oi element vector e na thakle ->  int idx = lower_bound(v.begin(), v.end(), x) - v.begin(); idx = v.size(), idx2 = v.size(); (jodi vector empty hoy then idx = 0, idx2 = 0;) ... lower_bound(idx) = upper_bound(idx2);
///  map<pair<int, int>, ll> mp;  ans += mp[{(x - v[i] % x) % x, v[i] % y}]; mp[{v[i] % x, v[i] % y}]++; for(auto i : mp) { cout<<i.first.first<<' '<<i.first.second<<'\n'; }
///  const int N = 200005; int cnt[N]; (globally declare)
///  for(int i=0; i<n - 1; i++) { cnt[s[i] - 'a']++; cnt[s[i + 2] - 'a']++;  for(int j=0; j<26; j++) {  s[i + 1] = j + 'a'; }
///  s[i] = (((s[i] - 'a') + 1) % 26) + 'a'; or  s[i] = rand() % 26;
///  1 2
///  2 1
///  v[v[i]] == i
///  set<int> used; if(!used.count(x)) { } or if(used.find(x) == used.end()) { }
///  int l = -1;  for(int i=1; i <= n; i++) { l = i; }
///  int a[3], k = 0; for(int i=0; i * i < n; i++) { a[k] = i; k++; }
///  when map more than 2 numbers -> map<array<int, 3>, ll> mp; mp[{x, y, z}]++; cout<<mp[{x, y, z}]<<'\n';  for(auto i : mp) { cout<<i.first[0]<<' '<<i.first[1]<<' '<<i.first[2]<<'\n'; }
///  map<int, map<int, ll>> mp; mp[x][y]++;
///  (1 ≤ xi ≤ 500) sum = 501;  sum += v[i]; pref.push_back(sum);
///  kon point dhorbo -> all possible combination check
///  left e jabo,, for(int i=0; i<n; i++) {  for(int j=i - 1; j>=0; j--) { } },,  right e jabo -> for(int i=0; i<n; i++) { for(int j=0; j<=i; j++) { } }
///  value based binary search(1 ta checker funtion thakbe) -> sort(v.begin(), v.end()); ll l = 0, r = v[n - 1], ans; while(l <= r) {  ll mid = l + (r - l) / 2; for(int i=0; i<n; i++) { if(v[i] > mid) sum += v[i] - mid; } if(sum >= k) { l = mid + 1; ans = mid; } else r = mid - 1; } cout<<ans;
///  vector<int> e; *e.begin() or e[0];
///  sliding window deep -> int n = v.size(); int min1 = INT_MAX; long long sum = 0; int cnt = 0, k = 0; for(int i=0; i<n; i++) {  sum += v[i]; cnt++;   while(sum >= x and k < n) {  min1 = min(min1, cnt);  sum -= v[k];  k++; cnt--; } }  if(min1 == INT_MAX) return 0; else return min1;
///  8 + 7 + 6 + 5 = 8 7 6 5   4 3 2 1 ,, 1 2 3 4   5 6 7 8 = =  ((8 * (8 + 1)) / 2) - ((4 * (4 + 1)) / 2) = 8 + 7 + 6 + 5
///  string x = "AHIMOTUVWXY"; ok &= (x.find(i) != -1);
///  Suffix Sum --> sort(v.begin(), v.end()); vector<ll> suff(n); suff[n - 1] = v[n - 1]; for(int i=n - 1; i>=0; i--) suff[i] = suff[i + 1] + v[i]; }
///  Sliding Window + Binary Search -->  bool check(int &mid, auto &v, int &x) { for(int i=0; i<mid; i++) sum += v[i];  if(sum >= x) return true; int k = mid;  for(int i=0; k<n; i++) {  sum -= v[i];  sum += v[k];  if(sum >= x) { return true; } k++; } return false; }
///  sliding window another approach -> int subArraySum = 0; for(int i=0; i<n; i++) { if(i >= len) sumArraySum -= v[i - len]; if(sumArraySum >= target) return true; }
///  sort(v.begin() + l, v.begin() + r + 1); ,,,  reverse(v.begin() + l, v.begin() + r + 1);
///  set<int> s(v.begin(), v.end());
///  palindrome check --> odd <= 1
///  good hash + prefix -> int cnt[26]; vector<vector<int>> pref(n + 1, vector<int> (26));  for(int i=0; i<n; i++) {  cnt[s[i] - 'a']++;  for(int j=0; j<26; j++) {  pref[i + 1][j] = cnt[j]; } } cin>>q; while(q--) {  int l, r; cin>>l>>r;  for(int i=0; i<26; i++) { if((pref[r][i] - pref[l - 1][i]) % 2) count++; }  if(count > 1) cout<<"NO"; (Not palindrome)  else cout<<"YES"; }
///  for(int i=0; i<n; i++) { while(s[i] == 'v') { cnt++; i++; } if(cnt > 1) sum += cnt - 1, pref[i - 1] = sum; }  for(int i=1; i<pref.size(); i++) { if(pref[i] == 0) pref[i] = pref[i - 1]; }
///  map<pair<int, int>, ll> ab, bc, ca; map<pair<int, int>, map<int, ll>> mp, mp2, mp3;  for(int i=0; i<n - 2; i++) {  ans += ab[{v[i], v[i + 1]}]; ans -= mp[{v[i], v[i + 1]}][v[i + 2]];      ans += bc[{v[i + 1], v[i + 2]}]; ans -= mp2[{v[i + 1], v[i + 2]}][v[i]];     ans += ca[{v[i + 2], v[i]}]; ans -= mp3[{v[i + 2], v[i]}][v[i + 1]];     ab[{v[i], v[i + 1]}]++; bc[{v[i + 1], v[i + 2]}]++; ca[{v[i + 2], v[i]}]++;      mp[{v[i], v[i + 1]}][v[i + 2]]++; mp2[{v[i + 1], v[i + 2]}][v[i]]++;  mp3[{v[i + 2], v[i]}][v[i + 1]]++; }
///  map<array<int, 2>, int> cnt, cnt2, cnt3;    cnt[{a, b}]++; cnt2[{b, c}]++; cnt3[{c, a}]++;
///  map<array<int, 3>, int> mp, mp2,mp3;   mp[{a, b, c}]++;
///  map<pair<int, int>, ll> mp;  map<tuple<int, int, int>, ll> abc;
///  map<int, map <pair <int, int>, int>> mp; mp[0][{b, c}]++; mp[1][{a, c}]++; mp[2][{a, b}]++;
///  map<vector <int>, int> mpp; mpp[{a, b, c}]++;
///  map<pair<pair<int, int>, int> , int> same;  same[{{a[i], a[i+1]}, a[i+2]}]++;
///  map<char, char> mp; for(int i=0; i<N; i++) { mp[ans[i]] = ans[ans.size() - 1 - i]; }
///  for (auto [c, d] : mp) { }
///  while(next_permutation(v.begin(), v.end())) for(auto i : v) { num = num * 10 + i; }
///  map<int, int> mp, mp2;  mp[i + 1] = x;  mp2[j + 1] += x;
///  string s(n, 'a'); for(int i=1; i<=n; i++) { sum += i; if(sum >= k) { break; } }
///  vector<int> ans; for(int i=0; i<n; i++) { if(v[i] == target) ans.push_back(i + 1); }
///  priority_queue<ll,vector<ll>,greater<ll>> pq; or priority_queue<long long> pq; pq.push(-a);  while(pq.size()) { a = pq.top(); pq.pop(); a *= -1; cout<<a<<' '; }
///  while(v.size()) { cout<<v.back(); v.pop_back(); }
///  int dist(pii a, pii b) { return abs(a.first - b.first) + abs(a.second - b.second); }  vector<pair<int, int>> corners = {{1, 1}, {1, m}, {n, 1}, {n, m}}; vector<pair<int, pair<int, int>>> cells; for (int i = 1; i <= n; i++) { for (int j = 1; j <= m; j++) { int maxd = 0; for (auto x : corners)  { maxd = max(maxd, dist(x,{i, j})); } cells.push_back({maxd, {i, j}}); } sort(cells.begin(), cells.end());  for (auto [x, y] : cells) cout << x << ' ';
///  map<int,int> mp; for(auto it=m1.begin();it!=m1.end();it++) { while((*it).second--) { cout<<(*it).first<<" "; } cout<<'\n'; }
///  v.push_back(1e18);  v.push_back(-1); sort(v.begin(), v.end()); while(q--) { cin>>d>>a; int lb = lower_bound(v.begin(), v.end(), d) - v.begin(); ll LB = lb - 1; cout<<min(max(0LL, d - v[lb]) + max(0LL, a - sum + v[lb]), max(0LL, d - v[LB]) + max(0LL, a - sum + v[LB])); }
///  st.insert(-1LL);  st.insert(1e18); for(auto i : v) st.insert(i); auto it=st.lower_bound(x); long long ma=(*it); it--; long long mi=(*it); if(it != v.end()){ } if(it != v.begin()){ } }
///  vector<ll> v(n); iota(v.begin(), v.end(), 0);
///   auto req = [&]() { return (y * ((x + y) / y)) - x; }  ll r = req();
///   vector<pair<char, int>> P; P.push_back(make_pair(s[0], 1)); if (s[j] == s[j - 1]){ P.back().second++; } else {  P.push_back(make_pair(s[j], 1)); }
///   (m.begin()) -> second, (m.begin()) -> first, (m.rbegin()) -> first
///   factorial / prefix multiplication -->  const int N = 1e5 + 1; vector<ll> cnt(N, 1); for(int i=2; i<=N; i++) { cnt[i] = (i * cnt[i - 1]) % mod; }    cout<<(((cnt[k] * power((cnt[n] * cnt[k - n]) % mod, mod - 2, mod)) % mod) * cnt[n]) % mod<<'\n';///
///   combination -> ncr -> (fact[n] * power((fact[r] * fact[n - r]) % mod, mod - 2, mod)) % mod;
///   permutation -> npr -> (fact[n] * power(fact[n - r], mod - 2, mod)) % mod;
   n = unique(v.begin(), v.end()) - v.begin();
   Bitwise technique -->
    cin>>x ;
    for(int j=32;j>=0;--j)
    {
        if(x&(1<<j))
         {
              a[i]=(1<<j) ;
             break ;
        }
    }
/// set<pair<int, int>> s;  auto p1 = *s.begin(); auto p2 = *--s.end();  s.erase(p1);   p1.first--, p2.first--; if (p1.first > 0) s.insert(p1); auto x = *st.rbegin(); st.erase(x); s.erase(--s.end());
///  int number, base;
///  cout << log(number) / log(base);
///  map<int, pair<int, int>> mp; mp[x] = {(i + n) - mp2[x], i - mp2[x]}; for (auto [x, d] : mp) { mp3[d.first]++; mp3[d.second]++; }
///  rotate(v.begin(), v.begin() + 1, v.end());
///  set<pair<int, int>> st; if (cnt[i]) st.insert({cnt[i], i}); auto [x, c] = *st.rbegin(); st.erase({x, c}); if (x > 1) st.insert({x - 1, c});
///  n = unique(v.begin(), v.end()) - v.begin();
    int n;
    cin>>n;

    preFact(n);
    cout<<fact[n];

    return 0;
}
