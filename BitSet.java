import java.util.* ;
import java.io.*; 
public class Solution {
    public static int findFirstRepeatingDigit(String digitPattern) {
        // Write your code here.
        int[] array = new int[10];
        Arrays.fill(array, 0);
        for(int i = 0; i < digitPattern.length(); i++) {
            char ch = digitPattern.charAt(i);
            int num = ch;
            int idx = num - 48;
            // System.out.print(idx);
            if(array[idx] != 0) {
                return idx;
            } else {
                array[idx]++;
            }
        }
        return -1;
    }
}