int numberOfGoodIndices(int n, vector<int> &a) {
  // Write Your Code Here.
  int indexCount = 0;
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (a[i] % a[j] == 0) {
          cnt++;
        }
      }
    }
    if(cnt >= 2) indexCount++;
  }
  return indexCount;
}