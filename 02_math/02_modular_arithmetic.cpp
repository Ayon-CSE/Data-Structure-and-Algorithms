/// modular arithmetic template
void modnor(ll &x, ll mod) {x %= mod; if(x < 0)(x += mod);}
ll modmul(ll x, ll y, ll mod) { x %= mod, y %= mod; modnor(x, mod),modnor(y, mod); return ((__int128)x*y)%mod; }
ll modadd(ll x, ll y, ll mod) { x %= mod, y %= mod; modnor(x, mod),modnor(y, mod); return (x+y)%mod; }
ll modsub(ll x, ll y, ll mod) { x %= mod, y %= mod; modnor(x, mod),modnor(y, mod); x -= y; modnor(x, mod); return x; }
ll modpow(ll b, ll p, ll mod) { ll r = 1; while(p) {if(p&1) r = modmul(r, b, mod); b = modmul(b, b, mod);p >>= 1;}return r;}
ll modinverse(ll x, ll mod){return modpow(x,mod-2, mod);}  /// if mod is prime.
ll moddiv(ll x, ll y, ll mod){return modmul(x,modinverse(y, mod), mod);}

