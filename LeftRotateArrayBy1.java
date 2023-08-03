import java.util.* ;
import java.io.*; 


public class Solution {

    static int[] rotateArray(int[] arr, int n) {
        // Write your code here.
        reverseArray(arr, 1, n-1);
        reverseArray(arr, 0, n-1);;
        return arr;
    }
    public static void reverseArray(int[] a, int startIndex, int endIndex) {
        while(startIndex < endIndex) {
            a[startIndex] = a[startIndex] ^ a[endIndex];
            a[endIndex] = a[startIndex] ^ a[endIndex];
            a[startIndex] = a[startIndex] ^ a[endIndex];
            startIndex++;
            endIndex--;
        }
    }
}