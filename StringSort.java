import java.util.* ;
import java.io.*; 
public class Solution {
	public static String stringSort(String s) {
		// Write your code here.
		int[] charArray = new int[26];
		Arrays.fill(charArray, 0);
		for(int i = 0; i < s.length(); i++) {
			charArray[s.charAt(i) - 97]++;
		}
		s = "";
		for(int i = 0; i < 26; i++) {
			if(charArray[i] > 0) {
				while(charArray[i] > 0) {
					s += (char) (97+i);
					charArray[i]--;
				}
			}
		}
		return s;
	}
}