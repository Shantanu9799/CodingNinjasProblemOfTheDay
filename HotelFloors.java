import java.util.* ;
import java.io.*; 
public class Solution {
  public static int hotelBookings(List<String> queries)
  {
      // Write your code here.
      int cnt = 0;
      for(String str : queries) {
        if(str.charAt(0) == '+') {
          cnt++;
        }
      }
      return cnt;
  }
}