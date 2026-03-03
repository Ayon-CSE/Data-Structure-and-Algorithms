/// 3 elements niye chinta korbo
/// recursion template
int f(int ind, vector<int> &ans, vector<int> &v, int s, int sum, int n) {
    if(ind == n) {
        if(s == sum) return 1;
        return 0;
    }

    s += v[ind];
    ans.push_back(v[ind]);
    int l = f(ind + 1, ans, v, s, sum, n);

    ans.pop_back();
    s -= v[ind];
    int r = f(ind + 1, ans, v, s, sum, n);

    return l + r;
}
