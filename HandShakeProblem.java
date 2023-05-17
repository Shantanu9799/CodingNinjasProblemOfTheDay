import java.util.* ;
import java.io.*; 
public class Solution {
    static int maximumHandshakes(int n, int[] entry, int[] exit) {
        // Write your code here.
        int maxi = 0;
        int mini = Integer.MAX_VALUE;
        for(int i=0; i<n; i++) {
            maxi = Math.max(maxi, entry[i]);
            maxi = Math.max(maxi, exit[i]);
            mini = Math.min(maxi, entry[i]);
            mini = Math.min(maxi, exit[i]);
        }

        int[] handshake = new int[maxi+1];
        Arrays.fill(handshake, 0);
        maxi = 0;
        for(int i=0; i<n; i++) {
            for(int j=entry[i]; j<exit[i]; j++) {
                handshake[j]++;
                maxi = Math.max(maxi, handshake[j]);
            }
        }

        if(maxi < 2) {
            return 0;
        }

        return ncr(maxi, 2);

    }

    public static int ncr(int n, int r) {
        double sum = 1;
        for (int i = 1; i <= r; i++) {
            sum = sum * (n - r + i) / i;
        }
        return (int) sum;
    }

}
