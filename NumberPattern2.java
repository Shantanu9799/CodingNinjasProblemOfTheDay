/*
 * 1
 * 2 3 
 * 3 4 5
 * 4 5 6 7
 * 5 6 7 8 9
 */


import java.util.* ;
import java.io.*; 

public class Solution {
	public static String[] NumberPattern(int n) {

		// Write your code here

		String[] array = new String[n];
		int idx = 0;

		for(int i=1; i<=n; i++) {
			int num = i;
			String cur = "";

			for(int j = 1; j<=i; j++) {
				cur += num;
				num++;
			}
			array[idx++] = cur;
		}

		return array;
	}

}
