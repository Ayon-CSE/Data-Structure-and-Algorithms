/// if we push to bit to set bit
if(n | (1 << 2))

/// if we push to bit to unset bit
if(n & (~(1 << 2)))

///3rd bit toggle(x - or)
n ^ (1 << 2);
