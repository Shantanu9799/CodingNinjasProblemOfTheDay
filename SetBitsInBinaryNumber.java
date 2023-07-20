import java.util.* ;
import java.io.*; 
public class Solution {
	public static int countSetBits(int n) {
		String binary = Integer.toBinaryString(n);
		int cnt = 0;
		for(int i = 0; i < binary.length(); i++) {
			if(binary.charAt(i) == '1') {
				cnt++;
			}
		}
		return cnt;
	}
}