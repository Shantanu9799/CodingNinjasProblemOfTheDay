import java.util.* ;
import java.io.*; 
public class Solution {
	public static int findSecondLargest(int n, int[] arr) {
		// Write your code here.
		int largest = Integer.MIN_VALUE;
		int SecondLargest = Integer.MIN_VALUE;
		for(int i : arr) {
			if(i > largest) {
				SecondLargest = largest;
				largest = i;
			}
			if(i<largest && i>SecondLargest) {
				SecondLargest = i;
			}
		}
		if(SecondLargest == Integer.MIN_VALUE) {
			return -1;
		}
		return SecondLargest;
	}
}