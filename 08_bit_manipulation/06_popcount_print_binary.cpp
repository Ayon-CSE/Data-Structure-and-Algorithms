/// set bit count using built in function
cout<<__builtin_popcountll(1LL<<35); /// 1
cout<<__builtin_popcountll((1LL<<35) - 1); /// 35

/// print binary digit
void printBinary(int num) {
    for(int i=10; i>=0; i--) {
        cout<<((num >> i) & 1)<<' ';
    }
    cout<<'\n';
}
