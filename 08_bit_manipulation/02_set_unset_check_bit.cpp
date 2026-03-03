///set bit or unset bit
 for(int i=0; i<=10; i++) {
    if(n & (1 << i)) { /// (1 << 0) = 000...0001 (sets the 0th bit to 1) The result is a number where only the i-th bit is set to 1 and all other bits are 0.
        cout<<"Set bit";
    }
    else cout<<"Unset bit";
    cout<<'\n';
}
