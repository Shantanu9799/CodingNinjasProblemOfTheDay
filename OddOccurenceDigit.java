import java.util.* ;
import java.io.*; 
public class Solution 
{
	public static int findOdd(int[] arr, int n) 
    {
		// WRITE YOUR CODE HERE
		int xor = 0;
		for(int i : arr) {
			xor ^= i;
		}
		return xor;

        // idea : every element in the array occured even times
        // so it's ovious that the xor of the even occurrences number turns into zero,
        // but the xor of the odd occurrences number will become the number itself
	}
}