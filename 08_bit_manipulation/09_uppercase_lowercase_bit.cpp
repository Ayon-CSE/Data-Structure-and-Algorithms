/// convert uppercase to lowercase and vice versa using bit manipulation
A
0 0 0 0 1 0 0 0 0 0 1
a
0 0 0 0 1 1 0 0 0 0 1
char a = 'A' | (1 << 5);
cout<<a;
char a = 'A' | ' ';
cout<<a;
char A = 'a' & ~(1 << 5);
cout<<A;
char A = 'a' & '_';
cout<<A;
