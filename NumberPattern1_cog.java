import java.util.* ;
import java.io.*; 
public class Solution {
    public static void printPattern(int n) {
        // Write your code here.
        for(int i=0; i<n; i++) {
            for(int j=0; j<=i; j++) {
             System.out.print("1");
            }
            System.out.println();
        }
    }
}
