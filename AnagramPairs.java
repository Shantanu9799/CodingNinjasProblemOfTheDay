
import java.util.Arrays;
public class Solution {

    public static boolean isAnagram(String str1, String str2) {
        //Your code goes here
        int[] charArray = new int[26];
        Arrays.fill(charArray, 0);

        for(int i = 0; i < str1.length(); i++) {
            int idx = str1.charAt(i) - 'a';
            charArray[idx]++;
        }
        for(int i = 0; i < str2.length(); i++) {
            int idx = str2.charAt(i) - 'a';
            charArray[idx]--;
        }

        for(int i : charArray) {
            if(i != 0) {
                return false;
            }
        }
        return true;
    }

}