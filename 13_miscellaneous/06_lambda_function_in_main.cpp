/// effective function from main()
       auto fun = [&](int i) {
            if(i - 3 < 0 and i + 3 >= n) return false;
            return s[i] == '1' and s[i + 1] == '1' and s[i + 2] == '0' and s[i + 3] == '0';
        };
