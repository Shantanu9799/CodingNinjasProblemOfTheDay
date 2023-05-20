import java.util.* ;
import java.io.*; 
public class Solution {

    public static int beautifulIndex(int N, int[] A)
    {
        // Write your code here.
        int prefixSum = 0;
        
        int suffixSum = 0;
        for(int i : A) {
            suffixSum += i;
        }

        for(int i = 0; i < N; i++) {
            if(prefixSum == (suffixSum-A[i])) {
                return i+1;
            }
            prefixSum += A[i];
            suffixSum -= A[i];
        }

        return -1;

    }
}
