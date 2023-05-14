import java.util.* ;
import java.io.*; 

class Solution {

  public static int makeLucky(String s,int n) {
    // Write your code here.
    int cnt = 0;
    for(int i=0; i<=n-3; i++) {
      if((s.charAt(i) == s.charAt(i+1)) && (s.charAt(i+1) == s.charAt(i+2))) {
        cnt++;
      }
    }
    return cnt;
  }
}
