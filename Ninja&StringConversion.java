public class Solution {
    static String ninjaAndStringConversion(int n, String str) {
        // Write your code here.
        String newString = "";
        for(int i = 0; i < n; i++) {
            char ch = str.charAt(i);
            if(ch >= 97) {
                if(ch == 'z' ){
                    newString += 'a';
                } else {
                    ch = (char) (ch + 1);
                    newString += ch;
                }
                
            } else {
                if(ch == 'A' ){
                    newString += 'Z';
                } else {
                    ch = (char) (ch - 1);
                newString += ch;
                }
            }
        }
        return newString;
    }
}