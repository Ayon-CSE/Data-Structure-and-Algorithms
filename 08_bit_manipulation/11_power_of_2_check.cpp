/// check a number is power of 2
int a = 16;
/// a     =  1 0 0 0 0
/// a - 1 =  0 1 1 1 1
if((a & (a - 1)) == 0) cout<<"power of 2";
else cout<<"not power of 2";
