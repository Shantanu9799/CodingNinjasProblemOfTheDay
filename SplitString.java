import java.util.* ;
import java.io.*; 
public class Solution {
    public static Boolean splitString(String str) {
        // Write your code here..
        int n = str.length();
        int leftHalf = count(str.substring(0, n/2));
        int rightHalf = count(str.substring(n/2));
        return leftHalf==rightHalf;
    }

    public static int count(String s) {
        int cnt = 0;
        for(int i = 0; i < s.length(); i++) {
            String character = s.substring(i, i+1).toLowerCase();
            if(character.equals("a") || character.equals("e") || character.equals("i") || character.equals("o") || character.equals("u")) {
                cnt++;
            }
        }
        return cnt;
    }

}