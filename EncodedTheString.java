import java.util.* ;
import java.io.*; 

class Solution {
  public static String encodeString(int n, String s) {
    // Write your code here.
    String ans = "";
    for(int i = 0; i < n; i++) {
      if(isVowel(s.charAt(i))) {
        ans += (char) (s.charAt(i)+1);
      } else {
        ans += (char) (s.charAt(i)-1);
      }
    }
    return ans;
  }
  public static boolean isVowel(char ch) {
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
  }
}
