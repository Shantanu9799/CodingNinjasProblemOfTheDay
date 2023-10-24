long long int bestLineup(int n, vector<int> x) {
  // Write your code here.
  sort(x.begin(), x.end());
  reverse(x.begin(), x.end());
  long long ans;
  for(int i = 0; i < n; i++) {
    ans += (long long) pow((x[i]-i), 2);
  }
  return ans;
}
