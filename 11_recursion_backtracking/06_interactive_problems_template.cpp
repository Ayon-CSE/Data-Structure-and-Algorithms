/// interactive problems
       auto query = [&](int a, int b) {
          /// ami online judge k dicchi
            cout << "? " << a << ' ' << b << endl;

          /// online judge response dicche
            int resp;
            cin >> resp;
            return resp;
        };
        int l = 1, r = 1000;
        while (l <= r) {
            int mid = (l + r) / 2;

            int resp = query(mid, mid);

            if (mid * mid == resp) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << "! " << min(l, r) + 1 << endl;


void cmd(string x)
{
    cout << x << endl;
    cout.flush();
}
int check()
{
    int res; cin >> res;
    if( res == -1 ) {
       exit(0);
    }
    return res;
}

  string s = to_string(n - 9);
    s = "add " + s;

    cmd("mul 9");
    check();
    cmd("digit");
    check();
    cmd("digit");
    check();
    cmd(s);
    check();
    cmd("!");
    check();
