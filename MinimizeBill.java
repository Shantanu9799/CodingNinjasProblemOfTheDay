import java.util.* ;
import java.io.*; 

public class Solution {

  public static long totalBill(int n, int a[]) {
    // Write your code here.
      int idx = 0;
      for(int i=0; i<n; i++) {
        if(a[idx] < a[i]) {
          idx = i;
        }
      }
      a[idx] = a[idx]*-1;
      long sum = 0;
      for(int i : a) {
        sum += i;
      }
      return sum;
  }
}