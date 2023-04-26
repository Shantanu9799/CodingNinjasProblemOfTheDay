import java.util.* ;
import java.io.*; 
public class Solution {
    public static String reverseVowels(String s1){
        char[] s=s1.toCharArray();
        // Write your code here.
        int i = 0;
        int j = s.length-1;
        while(i < j) {
            boolean flag1 = (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u');
            boolean flag2 = (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u');
            if(flag1==true && flag2==true) {
               char temp = s[i];
               s[i] = s[j];
               s[j] = temp;
               i++;
               j--;
            } else if(flag1==true && flag2==false) {
                j--;
            } else if(flag1==false && flag2==true) {
                i++;
            } else {
                i++;
                j--;
            }
        }
          String string = String.valueOf(s);
        return string;
    }
}
