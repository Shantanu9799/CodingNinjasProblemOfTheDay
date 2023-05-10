import java.util.* ;
import java.io.*; 
public class Solution {	
	public static String reverseString(String str) {
		// Write your code here.
		int i=0;
		int j=str.length()-1;
		char[] s=str.toCharArray();
		while(i<=j){
		char t=s[i];
        s[i]=s[j];
        s[j]=t;
		i++;
		j--;}

		String ans=new String(s);
		return ans;
	}
}
