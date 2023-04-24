import java.util.* ;
import java.io.*; 

public class Solution {

    static boolean isKthBitSet(int n, int k) {
        // Write your code here.
        int mask = 1 << (k-1);
        int newN = n & mask;

        if(newN == 0) {
            return false;
        }

        return true;
    }
}