import java.util.* ;
import java.io.*; 
public class Solution {
    public static int arrayMaximum(int n) {
        // Write your code here..
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }
        if(n == 2) {
            return 1;
        }
        int[] arr = new int[n+1];
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2; i<=n; i++) {
            int idx = i/2;
            if((i&1) == 1) {
                arr[i] = arr[idx]+arr[idx+1];
            } else {
                arr[i] = arr[idx];
            }
        }
        int maxi = Integer.MIN_VALUE;
        for(int i : arr) {
            maxi = Math.max(maxi, i);
        }

        return maxi;
    }

}