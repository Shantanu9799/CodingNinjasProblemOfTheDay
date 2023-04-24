import java.io.*;
import java.util.* ;

public class Solution {
    public static int[] ninjaAndSortedArrays(int arr1[], int arr2[], int m, int n) {
        // Write your code here.
        int[] ans = new int[n+m];
        int k = 0;
        int i = 0; 
        int j = 0;
        while(j<n && i<m) {
            if(arr1[i] < arr2[j]) {
                ans[k++] = arr1[i];
                i++;
            } else {
                ans[k++] = arr2[j];
                j++;
            }
        }
        while(i < m) {
            ans[k++] = arr1[i];
            i++;
        }
        while(j < n) {
            ans[k++] = arr2[j];
            j++;
        }
        return ans;
    }
}
