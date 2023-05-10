import java.util.* ;
import java.io.*; 
public class Solution {
	public static void printPattern(int n){
		// Write your code here.
		for(int i=1; i<=n; i++) {
			for(int j=i; j<n; j++) {
				System.out.print(" ");
			}
			for(int j=1; j<2*i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
