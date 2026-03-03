/// recursion using 3 steps at a time (s means start, e means end)
int fun(int s, int e) {
    if(s == e) return 1;/// beshio ashte pare (1 + 1 + 1 + ... )
    if(s > e) return 0;

    return fun(s + 1, e) + fun(s + 2, e) + fun(s + 3, e);
}

if(fun(s, e) >= 1) cout << "YES";
else cout << "NO";
