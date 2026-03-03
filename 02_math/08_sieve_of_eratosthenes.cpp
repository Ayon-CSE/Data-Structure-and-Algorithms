
//int l = 10000000 + 7;
//vector<int> v; ///global iniatiaze korbo
//sieve(10000007); /// 1e6 + 1, 1e7 + 1, 1e8 + 1
void sieve(int n) {
    int ans = 0;

    vector<int> v;///global iniatiaze korbo
    bitset<N> prime; /// n + 1, 0

    for(int i = 2; i < N; i++) {
        if(prime[i] == 0) {
           v.push_back(i);

           for(int j = i * i; j < N; j += i) {
               prime[j] = 1;
           }
        }
    }
}
