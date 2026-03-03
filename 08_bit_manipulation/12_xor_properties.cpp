/// X - OR property
x ^ x = 0
x ^ 0 = x
x ^ y ^ z = y ^ x ^ z = x ^ z ^ y (jekono icchamoto boshate parbo)

/// x = no of set bits in A
/// y = no of set bits in B
if(x + y) is even then A ^ B is also even
if(x + y) is odd then A ^ B is also odd

/// addition using bits
A + B = (A ^ B) + 2(A & B)
A + B = (A | B) + (A & B)
