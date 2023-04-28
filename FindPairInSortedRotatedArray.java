import java.util.* ;
import java.io.*; 
public class Solution 
{
	public static boolean findPairSum(int[] arr, int target) 
	{
		// Write your code here
		Arrays.sort(arr);
		int i = 0;
		int j = arr.length-1;
		while(i < j) {
			int sum = arr[i] + arr[j];
			if(sum == target) {
				return true;
			} else if(sum > target) {
				j--;
			} else {
				i++;
			}
		}
		return false;
	}
}
