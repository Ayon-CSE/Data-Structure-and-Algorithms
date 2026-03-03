vector<int> LPS(string &pattern) {
   vector<int> lps(pattern.size());

   int index = 0;
   for(int j=1; j < pattern.size(); ) {
       if(pattern[index] == pattern[j]) {
           lps[j] = index + 1;
           index++;
           j++;
       }
       else {
           if(index != 0) index = lps[index - 1];
           else lps[j] = 0, j++;
       }
   }

   return lps;
}

void KMP(vector<int> &lps, string &text, string &pattern) {
    bool ok = false;

    int i = 0, j = 0;
    /// i -> text, j -> pattern
    while(i < text.size()) {
        if(text[i] == pattern[j]) {
            i++;
            j++;
        }
        else {
            if(j != 0) j = lps[j - 1];
            else i++;
        }

       if(j == pattern.size()) {
           ok = true;
           cout<<"found"<<'\n';
           cout<<"Starting index : "<<i - pattern.size()<<'\n';
           j = lps[j - 1];
       }
    }
    if(!ok) cout<<"Not found"<<'\n';
}

/// count how many prefix occurs/frequency
    vector<int> lps = LPS(s), ans;
    map<int, int> mp;
    for(int i=0; i<lps.size(); i++) {
        mp[lps[i]]++;
    }

    for(int i=s.size(); i>=1; i--) {
        mp[lps[i - 1]] += mp[i];
    }

/// find prefix length which is also suffix
   int len = lps.back();
   while(len) {
       ans.push_back(len);
       len = lps[len - 1];
   }

string pattern, text;
getline(cin, text);
getline(cin, pattern);

vector<int> lps = LPS(pattern);
KMP(lps, text, pattern);
