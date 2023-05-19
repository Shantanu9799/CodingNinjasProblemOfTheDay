import java.util.* ;
import java.io.*; 
public class Solution {
	public static char findAddedCharacter(String s, String t) {
		// Write your code here.
		char[] sArray = s.toCharArray();
		char[] tArray = t.toCharArray();

		for(int i = 0; i < sArray.length; i++) {
			if(sArray[i] != tArray[i]) {
				return tArray[i];
			}
		}
		return tArray[tArray.length-1];
	}
}