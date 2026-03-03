/// swap using bit manipulation
int a = 6, b = 4;
a = a ^ b;
b = a ^ b;///a
a = a ^ b;///b
cout<<a<<' '<<b;///4 , 6
