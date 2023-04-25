import java.util.* ;
import java.io.*; 
public class Solution 
{
    public static void sort012(int[] arr)
    {
        //Write your code here
        int cntZero = 0;
        int cntOne = 0;
        int cntTwo = 0;
        for(int i : arr) {
            if(i == 0) {
                cntZero++;
            } else if(i == 1) {
                cntOne++;
            } else {
                cntTwo++;
            }
        }
        int i = 0;
        while(cntZero-- > 0) {
            arr[i++] = 0;
        }
        while(cntOne-- > 0) {
            arr[i++] = 1;
        }
        while(cntTwo-- > 0) {
            arr[i++] = 2;
        }
    }
}