import java.util.* ;
import java.io.*; 
public class Solution {
    public static int ninjaAndSubstrings(String str) {
        // Write your code here.
        HashSet<String> set = new HashSet<>();
        for(int i=0; i<=str.length()-2; i++) {
            String sub = str.substring(i, i+2);
            set.add(sub);
        }
        return set.size();
    }
}