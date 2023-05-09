import java.util.* ;
import java.io.*; 
public class Solution {
    public static int findRowK(int[][] mat) {
        // Write your code here.
        for(int i=0; i<mat.length; i++) {
            for(int j = 0; j<mat.length; j++) {
                if(i == j) {
                    mat[i][j] = -1;
                }
            }
        }

        int n = mat.length;
        int k = -1;
        int temp = n-1;
        while(temp-- > 0) {
            int KthRowSum = rowSum(mat, temp);
            int KthColSum = columnSum(mat, temp);
            if(KthRowSum == -1 && KthColSum == n-2) {
                k = temp;
                break;
            }
        }
        return k;
    }
    public static int rowSum(int[][] mat, int k) {
        int roSum = 0;
        for(int j = 0; j<mat.length; j++) {
            roSum += mat[k][j];
        }
        return roSum;
    }
    public static int columnSum(int[][] mat, int k) {
        int colSum = 0;
        for(int j = 0; j<mat.length; j++) {
            colSum += mat[j][k];
        }
        return colSum;
    }
}
