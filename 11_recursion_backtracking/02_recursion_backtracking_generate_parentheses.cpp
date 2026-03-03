/// recursion and backtracking
 vector<string> ans;
    void fun(string &s, int o, int c, int n) {
        if(o == n and c == n) {
            ans.push_back(s);
            return;
        }

        if(o < n) {
            s.push_back('(');
            fun(s, o + 1, c, n);
            s.pop_back();
        }
        if(c < o) {
            s.push_back(')');
            fun(s, o, c + 1, n);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
         string s;
         fun(s, 0, 0, n);

         return ans;
    }
