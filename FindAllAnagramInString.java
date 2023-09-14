import java.util.ArrayList;
import java.util.Arrays;

public class Solution {
    public static ArrayList<Integer> findAnagramsIndices(String str, int n, String ptr, int m){
        // Write your code here.
        ArrayList<Integer> anagram = new ArrayList<>();
        for(int i = 0; i <= n - m; i++) {
            String s = str.substring(i, m+i);
            boolean isIt = isAnagram(ptr, s);
            if(isIt) {
                anagram.add(i);
            }
        }
        return anagram;
    }
    public static boolean isAnagram(String a, String b) {
        int character[] = new int[26];
        Arrays.fill(character, 0);
        for(int i = 0; i < a.length(); i++) {
            character[a.charAt(i) - 'A']++;
        }
        for(int i = 0; i < b.length(); i++) {
            character[b.charAt(i) - 'A']--;
        }
        for(int i = 0; i < 26; i++) {
            if(character[i] != 0) {
                return false;
            }
        }
        return true;
    }
}