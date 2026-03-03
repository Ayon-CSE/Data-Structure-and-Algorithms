/// Word Ladder (bfs on finding shortest path)
class Solution {
public:
    int ladderLength(string s, string t, vector<string>& v) {
         set<string> ss;
         for(auto i : v) ss.insert(i);

         queue<pair<string, int>> q;
         q.push({s, 0});

         while(q.size()) {
             auto [x, d] = q.front();
             q.pop();

             if(x == t) {
                 return d + 1;
             }

             for(int i=0; i<x.size(); i++) {
                 auto tmp = x;
                 for(char c = 'a'; c <= 'z'; c++) {
                     tmp[i] = c;

                     if(ss.count(tmp)) {
                         q.push({tmp, d + 1});
                         ss.erase(tmp);
                     }
                 }
             }
         }

         return 0;
    }
};
