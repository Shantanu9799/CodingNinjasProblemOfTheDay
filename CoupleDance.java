import java.util.* ;
import java.io.*; 
public class Solution {

    public static int maxTeams(int n, String s) {
        // Write your Code here

        int couplePair = 0;
        Stack<Character> stack = new Stack<>();
        for(int i = 0; i < n; i++) {
            char ch = s.charAt(i);
            if(stack.isEmpty()) {
                stack.push(ch);
            } else {
                if((ch == '1' && stack.peek() == '0') || (ch == '0' && stack.peek() == '1')) {
                    stack.pop();
                    couplePair++;
                } else {
                    stack.push(ch);
                }
            }
        }
        return couplePair;
    }
}