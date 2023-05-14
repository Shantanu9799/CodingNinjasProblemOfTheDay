/*
 * 4 4 4 4
 * 3 4 4 4
 * 2 3 4 4
 * 1 2 3 4
 */

 import java.util.* ;
import java.io.*; 

public class Solution {
	public static String[] NumberPattern(int n) {

		// Write your code here
		String[] array = new String[n];
		int idx = 0;

		for(int i=0; i<n; i++) {
			String cur = "";
			for(int j=n-i; j<n; j++) {
				cur = cur + j + "";
			}

			for(int j=0; j<n-i; j++) {
				cur = cur + n + "";
			}

			array[idx++] = cur;
		}

		return array;
	}

}
