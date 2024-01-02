#include <bits/stdc++.h>
int minimumDistance(int arr[], int n, int x, int y) {
  // Write your code here
  int posX = -1, posY = -1, minDis = INT_MAX;

  for (int i = 0; i < n; i++) {

    if (arr[i] == x) {
      posX = i;
      if (posY != -1) {
        minDis = min(minDis, abs(posX - posY));
      }
    }

    if (arr[i] == y) {
      posY = i;
      if (posX != -1) {
        minDis = min(minDis, abs(posX - posY));
      }
    }
  }

  return minDis == INT_MAX ? -1 : minDis;
}