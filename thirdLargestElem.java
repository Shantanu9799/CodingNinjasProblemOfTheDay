import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {
  public static int findThirdLagrest(ArrayList < Integer > arr) {
    // Write your code here.
    int largest = Integer.MIN_VALUE;
    int secondLargest = Integer.MIN_VALUE;
    int thirdLargest = Integer.MIN_VALUE;
    for(int i : arr) {
      if(i > largest) {
        thirdLargest = secondLargest;
        secondLargest = largest;
        largest = i;
      } else if(i > secondLargest && i < largest) {
        thirdLargest = secondLargest;
        secondLargest = i;
      } else if(i > thirdLargest) {
        thirdLargest = i;
      }
    }
    return thirdLargest;
  }
}
