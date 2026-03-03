void map_without_increment_technique() {
     int n;
     cin>>n;
     string s;
     cin>>s;

     map<char,int> mp;
     bool ok = true;
     for(int i=0; i<s.size(); i++) {
         if(mp.find(s[i]) == mp.end()) {
             mp[s[i]] = i;
         }
         else ok &= (i % 2 == mp[s[i]] % 2);
     }
}
