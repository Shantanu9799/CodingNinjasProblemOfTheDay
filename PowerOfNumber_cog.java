import java.util.* ;
import java.io.*; 

class Solution {

	public static long Pow(int X, int N) {
		//Write your code here
		if(N == 0) {
			return 1;
		}
		return (long) Math.pow(X, N);
	}
}

