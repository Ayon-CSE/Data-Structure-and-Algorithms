/// 4 to LSB bit unset target
0 0 0 0 0 1 1 1 0 1 1 = 59
0 0 0 0 0 1 0 0 0 0 0 = 32
int x = 59;
int ans = x & (~((1 << (4 + 1)) - 1));

/// MSB to 4 bit unset target
0 0 0 0 0 1 1 1 0 1 1
0 0 0 0 0 0 1 1 0 1 1
int ans = x & (((1 << (4 + 1)) - 1));
printBinary(ans);

(1 << (4 + 1))     = 0 0 0 0 0 1 0 0 0 0 0
(1 << (4 + 1)) - 1 = 0 0 0 0 0 0 1 1 1 1 1
