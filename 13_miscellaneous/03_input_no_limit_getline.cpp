/// when input is taken but there is no limit
        cin.ignore();

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> input;
        int x;
        while (ss >> x) input.push_back(x);

