int goodPartition(int n, vector<int> v) {
  // Write your code here.
  sort(v.begin(), v.end());
  return (v[n/2] > v[(n/2) - 1]) ? 1 : 0;
}