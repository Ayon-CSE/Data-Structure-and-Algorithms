/// mex
int mex(set<int> &s) {
    int k = 0;
    while(s.find(k) != s.end()) k++;

    return k;
}
