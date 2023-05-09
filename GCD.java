import java.util.*;
import java.io.*;

public class Solution {
	public static int findGcd(int a, int b) {
		// Write your code here
		if (a == 0)
			return b;
		if (b == 0)
			return a;
		if (a == b)
			return a;
		if (a > b)
			return findGcd(a - b, b);
		return findGcd(a, b - a);
	}
}