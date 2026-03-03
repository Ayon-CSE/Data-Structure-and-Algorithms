/// Alien Dictionary
class Solution {
  public:
    string findOrder(vector<string> &words) {
        vector<vector<int>> adj(26);
        set<char> s;

        for (auto i : words) {
            for (auto j : i) s.insert(j);
        }

       for (int i = 1; i < words.size(); i++) {
           int min1 = min(words[i].size(), words[i - 1].size());
           bool found_diff = false;
           for (int j = 0; j < min1; j++) {
               char x = words[i - 1][j];
               char y = words[i][j];
               if (x != y) {
                  adj[x - 'a'].push_back(y - 'a');
                  found_diff = true;
                  break;
                }
            }
            if (!found_diff && words[i - 1].size() > words[i].size()) {
                return "";
            }
        }


        vector<int> indegree(26, 0);
        for (int i = 0; i < 26; i++) {
            for (auto j : adj[i]) {
                indegree[j]++;
            }
        }

        queue<int> q;
        for (int i = 0; i < 26; i++) {
            if (s.count(i + 'a') && indegree[i] == 0) {
                q.push(i);
            }
        }

        string ans;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            ans.push_back(x + 'a');

            for (auto i : adj[x]) {
                indegree[i]--;
                if (indegree[i] == 0) {
                    q.push(i);
                }
            }
        }

        if (ans.size() < s.size()) {
            ans.clear();
            return ans;
        }
        return ans;
    }

