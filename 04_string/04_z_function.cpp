vector<int> Z(string &s) {
	vector<int> z(s.size());
	int l = 0, r = 0;

	for (int i = 1; i < s.size(); i++) {
		if (i < r) {
            ///copy
			z[i] = z[i - l];
			/// Handle case of z[i] reaching for characters
			/// beyond what we have seen at r
			if (i + z[i] > r) {
				z[i] = r - i;
			}
		}

		/// Look for more match beyond the current calculation
		while(i + z[i] < s.size() and s[z[i]] == s[i + z[i]]) z[i]++;

		/// Update l, r
		if (i + z[i] > r) {
			l = i;
			r = i + z[i];
		}
	}

	return z;
}
