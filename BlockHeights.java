import java.util.* ;
import java.io.*; 
public class Solution {
    public static int getNumberOfBlocks(int[] heights) {
        // Write your code here.
        int[] temp = new int[heights.length];
        int j = 0;
        for(int i = 0; i < heights.length; i++) {
            temp[j++] = heights[i];
        }
        Arrays.sort(heights);
        int cnt = 0;
        for(int i = 0; i < heights.length; i++) {
            if(heights[i] != temp[i]) {
                cnt++;
            }
        }
        return cnt;
    }
}