public class Solution {
    static int planetMisery(int n, int m) {
        // Write your code here.
        if(n == m) {
            return n * 2;
        }
        int mini = Math.min(n, m);
        mini = mini * 2 + 1;
        return mini;
    }
}