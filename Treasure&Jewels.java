import java.util.* ;
import java.io.*; 
public class Solution {
    public static int treasureAndJewels(int n, int m, String stones, String jewels) {
        // Write your code here..
        HashMap<Character, Integer> mpp = new HashMap<>();
        for(int i = 0; i < stones.length(); i++) {
            char key = stones.charAt(i);
            if(mpp.containsKey(key)) {
                mpp.put(key, mpp.get(key)+1);
            } else {
                mpp.put(key, 1);
            }
        }
        int treasure = 0;
        for(int i = 0; i < jewels.length(); i++) {
            char key = jewels.charAt(i);
            if(mpp.containsKey(key)) {
                treasure += mpp.get(key);
                mpp.put(key, 0);
            }
        }
        return treasure;
    }
}
