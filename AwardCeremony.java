import java.util.* ;
import java.io.*; 
public class Solution {

    public static int getTotalRewards(int n, int[] arr) {
        
        // Write Your Code Here
        HashSet<Integer> set = new HashSet<>();

        for(int i : arr) {
            if(i != 0) {
                set.add(i);
            }
        }
        return set.size();
    }
}
