import java.util.*;
import java.io.*;

public class Solution {
    public static String convertString(String message) {
        // Write your code here
        char[] charArray = message.toCharArray();
        boolean foundSpace = true;
        for (int i = 0; i < charArray.length; i++) {
            // if the array element is a letter
            if (Character.isLetter(charArray[i])) {
                // check space is present before the letter
                if (foundSpace) {
                    // change the letter into uppercase
                    charArray[i] = Character.toUpperCase(charArray[i]);
                    foundSpace = false;
                }
            } else {
                foundSpace = true;
            }
        }
        message = String.valueOf(charArray);
        return message;
    }
}