import java.util.HashSet;

public class Solution {
    static char kthUnique(int n, String s, int k) {
        // Write your code here.
        HashSet<Character> set = new HashSet<>();
        for(int i=0; i<n; i++) {
            char ch = s.charAt(i);
            set.add(ch);
            if(set.size() == k) {
                return ch;
            }
        }
        return '?';
    }
}