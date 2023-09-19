#include <bits/stdc++.h>
bool ninjaGram(string &str) {
  // Write your code here
   transform(str.begin(), str.end(), str.begin(), ::tolower);
  int charArray[26] = {0};
  for (int i = 0; i < str.size(); i++) {
      charArray[str[i] - 'a']++;
  }
  for(int i = 0; i <= 25; i++) {
      if(charArray[i] == 0) {
          return false;
      }
  }
  return true;
}