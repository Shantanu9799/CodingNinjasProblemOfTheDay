import java.util.* ;
import java.io.*; 

public class Solution {
	public static int findGcd(int x, int y) {
		// Write your code here
		if(x == 0) {
			return y;
		}
		if(y == 0) {
			return x;
		}
		if (x > y)
            return findGcd(x - y, y);
        return findGcd(x, y - x);
	}
}
