import java.util.* ;
import java.io.*; 
public class Solution {
	public static int[] termsOfAP(int x){
		// Write your code here.
		int num = 1;
		int[] AP = new int[x];
		int j = 0;
		while(x > 0) {
			int term = 3*num + 2;
			if(term%4 != 0) {
				AP[j++] = term;
				x--;
			}
			num++;
		}
		return AP;
	}
}