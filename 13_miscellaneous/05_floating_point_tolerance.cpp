 /// Use a tolerance to avoid precision issues
  instead to compare floating values,
 wa   if(v[k] == l + k * ans) cnt++;

 ac   if (abs(v[k] - (l + k * ans)) < 1e-18) {
          cnt++;
      }
