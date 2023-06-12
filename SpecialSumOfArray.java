/*
import java.util.* ;
import java.io.*; 
public class Solution{
	public static int specialSum(ArrayList<Integer> arr, int n ){
        // Write your code here.
		int sum = 0;
		for(int i : arr) {
			sum += i;
		}
		while(sum > 9) { //sum until it gets a one digit sum
			int sumOfSum = 0;
			while(sum > 0) {
				int rem = sum %10;
				sumOfSum += rem;
				sum /= 10;
			}
			sum = sumOfSum;
		}
		return sum;
	}
}
*/

//updated one

import java.util.* ;
import java.io.*; 
public class Solution{
	public static int specialSum(ArrayList<Integer> arr, int n ){
        // Write your code here.
		int sum = 0;
		for(int i : arr) {
			sum += i;
		}
		if(sum == 0) {
			return 0;
		}
		sum = sum%9;
		if(sum == 0) {
			return 9;
		}
		return sum;
	}
}