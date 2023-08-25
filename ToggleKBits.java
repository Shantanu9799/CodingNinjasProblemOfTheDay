import java.util.* ;
import java.io.*; 
public class Solution {
    public static int toggleKBits(int n, int k) {
        // Write your code here.
        while(k-- > 0) {
            int mask = 1 << k;
            n = n ^ mask;
        }
        return n;
    }
}