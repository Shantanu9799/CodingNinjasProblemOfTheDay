import java.util.*;
public class Solution {
    public static boolean isValidParenthesis(String s) {
        // Write your code here.
        Stack<Character> myStack = new Stack<>();
        char fChar = s.charAt(0);
        if(myStack.empty() && (fChar=='(' || fChar=='{' || fChar=='[')) {
            myStack.push(fChar);
        } else {
            return false;
        }
        for(int i=1; i<s.length(); i++) {
            char currChar = s.charAt(i);
            if(myStack.empty() || (currChar=='(' || currChar=='{' || currChar=='[')) {
                myStack.push(currChar);
            } else {
                if((currChar==')' && myStack.peek()=='(') || (currChar=='}' && myStack.peek()=='{') || (currChar==']' && myStack.peek()=='[')) {
                    myStack.pop();
                } else {
                    return false;
                }
            }
        }
        return myStack.empty();
    }
}