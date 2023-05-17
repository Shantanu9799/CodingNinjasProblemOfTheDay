import java.util.* ;
import java.io.*; 
public class Solution {
	public static void print(int n) {
		// Write your code here.
		for(int i =0; i<n; i++) {
			for(int j=0; j<n-i; j++) {
				if((i&1) == 1) {
					System.out.print("0");
				} else {
					System.out.print("1");
				}
			}
			System.out.println();
		}
	}
}
