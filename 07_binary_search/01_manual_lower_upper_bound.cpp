int lb(vector<int> &v, int &x) {
    int n = v.size(), l = 0, r = n - 1, ans = n;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(v[mid] >= x) ans = mid, r = mid - 1;
        else l = mid + 1;
    }

    return ans;
}

int ub(vector<int> &v, int &x) {
    int n = v.size(), l = 0, r = n - 1, ans = n;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(v[mid] > x) ans = mid, r = mid - 1;
        else l = mid + 1;
    }

    return ans;
}
