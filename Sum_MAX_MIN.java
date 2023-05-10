import java.util.* ;
import java.io.*; 
public class Solution {
  public static int sumOfMaxMin(int[] arr, int n) {
      // Write your code here.
      int maxi = Integer.MIN_VALUE;
      int mini = Integer.MAX_VALUE;
      for(int i : arr) {
        maxi = Math.max(maxi, i);
        mini = Math.min(mini, i);
      }
      return maxi+mini;
  }
}
