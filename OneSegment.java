import java.util.* ;
import java.io.*; 
public class Solution 
{
	public static boolean oneSegment(String str) 
	{
		// Write your code here.
		int segment = 1;
		int index = 1;
		while(index < str.length()) {
			if(str.charAt(index) == '0') {
				if(index+1 < str.length() && str.charAt(index+1) == '1') {
					return false;
				}
			}
			index++;
		}
		return true;
	}
}