import java.util.* ;
import java.io.*; 
import java.util.*;
/****
 * Following is the java Pair class
 * class Pair{
    char alphabet;
    int count;
    Pair(char ch, int x){
        this.alphabet = ch;
        this.count = x;
    }
}
 */


public class Solution {

    public static ArrayList<Pair> duplicate_char(String s, int n) {
        
        // Write your Code here

        int[] ch = new int[26];
        Arrays.fill(ch, 0);

        ArrayList<Pair> list = new ArrayList<>();

        if(s.charAt(0) < 97) {

            for(int i = 0; i<n; i++) {
                char currChar = s.charAt(i);
                ch[currChar-'A']++;
            }

            for(int i=0; i<26; i++) {
                if(ch[i] > 1) {
                    char theChar = (char) (i + 65);
                    Pair p = new Pair(theChar, ch[i]);
                    list.add(p);
                }
            }
        }


        else {
            for(int i = 0; i<n; i++) {
                char currChar = s.charAt(i);
                ch[currChar-'a']++;
            }

            for(int i=0; i<26; i++) {
                if(ch[i] > 1) {
                    char theChar = (char) (i + 97);
                    Pair p = new Pair(theChar, ch[i]);
                    list.add(p);
                }
            }
        }



        return list;
    }
}